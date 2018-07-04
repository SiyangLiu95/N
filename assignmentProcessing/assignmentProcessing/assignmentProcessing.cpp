// assignmentProcessing.cpp : combines assigment sentences between two files
// NIO Automotives
// Siyang Liu (6796)
// 2018-06-06

#include "stdafx.h"
#include<stdio.h>
#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<map>

#include<boost/algorithm/string/split.hpp>
#include<boost/algorithm/string/trim.hpp>

using namespace std;
using namespace boost;

typedef map <string, string> STR_STR_MAP;

void reportProgress(int& num) {
	//keep track of progress
	if (num % 500 == 0) {
		cout << "processed" << num << "lines" << endl;
	}
}

int findSubStrNum(string str1, string str2)
{
	int f = str1.find(str2);
	int ctr = 0;
	while (f != -1)
	{
		ctr++;
		str1 = str1.substr(f + 1, str1.size() - f - 1);
		f = str1.find(str2);
	}
	return ctr;
}

int main()
{
	//get Line from raw_data_input
	fstream from("raw_data_input.cpp"); //file reader
	//fstream from("FromT.txt"); //file reader

	string curLine = ""; //current line 
	int lineNum = 0; //line number
	string left = "";
	string right = "";

	STR_STR_MAP rawDataMap; //assignment pairing
	STR_STR_MAP::iterator iter; //map iterator

	cout << "Starting to process raw data input" << endl;

	while (getline(from, curLine))
	{
		lineNum++;
		trim(curLine);
		//cout << curLine << endl;

		int idx = curLine.find("="); 		//detect "=" sign
		if (idx != -1) {
			//cout << idx << endl;
			//parse line into left and right
			left = curLine.substr(0, idx);
			right = curLine.substr(idx + 1, curLine.size() - idx - 2);
			trim(left);
			trim(right);
			//cout << "Left: " << left << " Right: " << right << endl;
			//store correlation in unordered map; 
			//left(val to be matched) is key; right(raw input data) is value
			rawDataMap[left] = right;
		}

		reportProgress(lineNum);

	}
	from.close();

	//rawDataMap["0.0"] = "0.0";//handle one edge case

	cout << "Raw Data map contains " << rawDataMap.size() << " pairs" << endl;


	//create output files 
	ofstream err("err.txt", ios::trunc);
	ofstream processed("processed.txt", ios::trunc);
	ofstream varComp("variableComparator.txt", ios::trunc); // stores both sides of assignment line in final file 
	ofstream varNames("variableNames.txt", ios::trunc); // stores only the variable names
	err.close();
	processed.close();
	varComp.close();
	varNames.close();

	//open signal_process_module
	fstream to("signal_process_module.cpp");
	//fstream to("ToT.txt");

	//re-initialize line number 
	lineNum = 0;
	//initialize variable name containers
	string sourceVar = "";
	string endVar = "";

	string key = "";
	string val = "";
	string bestKey = "";
	string bestVal = "";

	bool foundMatch = false;

	cout << "Starting to work on signal process module" << endl;
	while (getline(to, curLine)) {
		lineNum++;
		trim(curLine);
		//cout << curLine << endl;
		int idx = curLine.find("="); 		//detect "=" sign
		if (idx != -1) {                    //if "=" exists: replace

			// handle one line of code spanning two lines in file
			if (curLine.find(";") == -1) {  //check line end //cannot find ";"
				lineNum++;
				string tmp = curLine;
				getline(to, curLine);
				trim(curLine);
				curLine = tmp + curLine;
			}

			//parse line into left and right
			left = curLine.substr(0, idx);
			right = curLine.substr(idx + 1, curLine.size() - idx - 2);
			trim(left);
			trim(right);
			endVar = left;					//store output variable name
			left = left + " = "; 			//now left includes the "=" sign
			//cout << "Left: " << left << " Right: " << right << endl;		

			//find replacement
			foundMatch = false;

			if (right.find("(") != -1) { //found (, special case
				int num = findSubStrNum(right, "("); //get number of "()"s
				for (int i = 0; i < num; i++) {
					for (iter = rawDataMap.begin(); iter != rawDataMap.end(); iter++) {
						key = iter->first;
						val = iter->second;
						if ((right.find(key) != -1) && (key.size() >= bestKey.size())) { //find match, best match has the longest key
							bestKey = key;
							bestVal = val;
							foundMatch = true;
						}
					}
					right = right.replace(right.find(bestKey), bestKey.size(), bestVal);
					bestKey = "";
					bestVal = "";
				}
			}
			else { // no (, simple case
				iter = rawDataMap.find(right);
				if (iter != rawDataMap.end()) { //found key in map
					right = iter->second;
					foundMatch = true;
				}
			}

			if (!foundMatch) {// cannot find replacement, right is unique
				ofstream err("err.txt", ios::out | ios::app);
				err << "Error: no replacement @ line" << lineNum << ":" << curLine << endl;
				err.close();
				
			}
			else { //Replacement exists 
		        sourceVar = right;

				varComp << endVar << "," << sourceVar << endl;
				
			}
		}

		processed << curLine << endl;
		
		reportProgress(lineNum);
	}
	err.close();
	processed.close();

	varComp.close();

	to.close();
	// use ctrl+A, ctrl+K,F to autocorrect format 
	return 0;
}

