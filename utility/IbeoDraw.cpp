// Siyang Liu (6796)
// NIO Automotives
// 2018-07-10
// IbeoDraw.cpp: visualize Ibeo object information + send objList through UDP

#pragma once

#include "IbeoDraw.h"

std::queue<IbeoECUObjList> objListQ;

Scalar myColor(int& c)
{
	if ((c == 5)
		|| (c == 6)) { //car & truck
		return Scalar(0, 255, 0); //green
	}
	else if (c == 3) { //ped
		return Scalar(0, 255, 255); // green + red = yellow
	}
	else if (c == 4) {
		return Scalar(0, 0, 255); // red
	}
	else if (c == 15) { //MBike
		return Scalar(255, 0, 255); // violet 
	}
	return Scalar(0, 122, 255); // orange
}

void myRotate(float& x, float& y, float angle) { //rotate 2D coordinate by angle
	float tmpX = cos(angle) * x + sin(angle) * y;
	float tmpY = -sin(angle) * x + cos(angle) * y;
	x = tmpX;
	y = tmpY;
}

void addObj2Frame(Mat& img, IbeoECUObj& o) {
	// find the coordinates of obj box in ibeo coordinate
	float cx = o.centerX;
	float cy = o.centerY;
	myRotate(cx, cy, -o.orientation);
	float pt1x = cx - o.length / (float)2.00000;
	float pt2x = cx + o.length / (float)2.00000;
	float pt1y = cy - o.width / (float)2.00000;
	float pt2y = cy + o.width / (float)2.00000;
	float arrowx = cx + +o.length / (float)2.00000 + sqrtf(o.relVelX * o.relVelX + o.relVelY * o.relVelY);
	float arrowy = cy;
	myRotate(cx, cy, o.orientation);
	myRotate(pt1x, pt1y, o.orientation);
	myRotate(pt2x, pt2y, o.orientation);
	myRotate(arrowx, arrowy, o.orientation);
	
	//std::cerr << "coordinate in ibeo system:" << std::endl;
	//std::cerr << o.orientation << std::endl;
	//std::cerr << "cx = " << cx << std::endl;
	//std::cerr << "cy = " << cy << std::endl;
	//std::cerr << "pt1x = " << pt1x << std::endl;
	//std::cerr << "pt1y = " << pt1y << std::endl;
	//std::cerr << "pt2x = " << pt2x << std::endl;
	//std::cerr << "pt2y = " << pt2y << std::endl;
	//std::cerr << "arrowx = " << arrowx << std::endl;
	//std::cerr << "arrowy = " << arrowy << std::endl;
	//std::cerr << std::endl;

	//convert ibeo coordinate to opencv mat val
	pt1x *= w / unit / 3; //900 pixels represents 150m irl.
	pt1y *= w / unit / 3;
	pt2x *= w / unit / 3;
	pt2y *= w / unit / 3; 
	arrowx *= w / unit / 3;
	arrowy *= w / unit / 3;
	cx *= w / unit / 3;
	cy *= w / unit / 3;
	//std::cerr << "mat values:" << std::endl;
	//std::cerr << cx << std::endl;
	//std::cerr << cy << std::endl;
	//std::cerr << pt1x << std::endl;
	//std::cerr << pt1y << std::endl;
	//std::cerr << pt2x << std::endl;
	//std::cerr << pt2y << std::endl;
	//std::cerr << arrowx << std::endl;
	//std::cerr << arrowy << std::endl;
	//std::cerr << std::endl;

	//std::cerr << "mat locations:" << std::endl;
	//std::cerr << "center x = " << (float)w / 2.00000 - cy << std::endl;
	//std::cerr << "center y = " << (float)w - cx << std::endl;
	//std::cerr << "x1 = " << (float)w / 2.00000 - pt1y << std::endl;
	//std::cerr << "y1 = " << (float)w - pt1x << std::endl;
	//std::cerr << "x2 = " << (float)w / 2.00000 - pt2y << std::endl;
	//std::cerr << "y2 = " << (float)w - pt2x << std::endl;
	//std::cerr << "arrow x = " << (float)w / 2.00000 - arrowy << std::endl;
	//std::cerr << "arrow y = " << (float)w - arrowx << std::endl;
	//std::cerr << std::endl;

	rectangle(img,
		Point(w / 2 - (int)pt1y, w - (int)pt1x),
		Point(w / 2 - (int)pt2y, w - (int)pt2x),
		myColor(o.classification),
		2, LINE_8, 0
	);
	arrowedLine(img,
		Point(w / 2 - (int)cy, w - (int)cx), //box center location
		Point(w / 2 - (int)arrowy, w - (int)arrowx),
		myColor(o.classification),
		1, LINE_8, 0,
		0.1//tip length
	);
}

void addLine(Mat& img, Point start, float angle, int length, Scalar color, int thickness)//angle in rad, left +, right -, center forward 0
{
	int dx = (int)(-sin(angle) * (float)length);
	int dy = (int)(-cos(angle) * (float)length);
	//std::cerr << dx << std::endl;
	//std::cerr << dy << std::endl;
	line(img, start,
		Point(start.x + dx, start.y + dy),
		color, thickness, LINE_8);
}

void setBackground(Mat& img) {
	//parse fov into 3*3 grid, each block represents 50m*50m irl.
	line(img, Point(0, w / 3), Point(w, w / 3), Scalar(128, 138, 125), 1, LINE_8);
	line(img, Point(0, w * 2 / 3), Point(w, w * 2 / 3), Scalar(128, 138, 125), 1, LINE_8);
	line(img, Point(w / 2, 0), Point(w / 2, w + 20), Scalar(128, 138, 125), 1, LINE_8);
	line(img, Point(w / 6, 0), Point(w / 6, w + 20), Scalar(128, 138, 125), 1, LINE_8);
	line(img, Point(w * 5 / 6, 0), Point(w * 5 / 6, w + 20), Scalar(128, 138, 125), 1, LINE_8);
	//origin
	line(img, Point(w / 2, w), Point(w / 2, w * 5 / 6), Scalar(0, 0, 255), 2, LINE_8);
	line(img, Point(w / 2, w), Point(w / 3, w), Scalar(0, 255, 0), 2, LINE_8);
	//FOV limits
	float fullFOV = (float)145.000 / (float)180.000 * (float)3.14159;
	//std::cerr << "fullFOV = " << fullFOV << std::endl;
	addLine(img, Point(w / 2, w), fullFOV / 2, 800, Scalar(128, 138, 125), 1);
	addLine(img, Point(w / 2, w), -fullFOV / 2, 800, Scalar(128, 138, 125), 1);
}

void drawFrame(Mat& fov) {
	Mat frame = fov.clone(); //cloning takes too much memory space when iteration # gets high?
	IbeoECUObjList ol = objListQ.front();

	for (int i = 0; i < ol.nbOfObjects; i++) {
		//if ((ol.IbeoECUObjs[i].classification == 3) //ped
		//	|| (ol.IbeoECUObjs[i].classification == 4) //bicycle
		//	|| (ol.IbeoECUObjs[i].classification == 5) //car
		//	|| (ol.IbeoECUObjs[i].classification == 6) //truck
		//	|| (ol.IbeoECUObjs[i].classification == 15) //mbike
		//	) {
		//	addObj2Frame(frame, ol.IbeoECUObjs[i]);
		//}
		addObj2Frame(frame, ol.IbeoECUObjs[i]);
	}
	imshow("ECU IDC File Replay", frame);
	waitKey(1);
}

void doSubThread() {
	//set FOV background
	Mat fov = Mat::zeros(w + 20, w, CV_8UC3); // leave space at bottom
	setBackground(fov);

	//initialize UDP address & socket
	IbeoUDPSend sendList;
	sendList.InitSocket("192.168.0.15", "1001");
	cout << "Send socket initialized " << endl;

	waitKey(0);

	while (true) {
		if (!objListQ.empty()) {
			IbeoECUObjList ol = objListQ.front();

			// draw frame
			//Mat frame = fov.clone(); //cloning takes too much memory space when iteration # gets high?
			

			for (int i = 0; i < ol.nbOfObjects; i++) {
			//	if ((ol.IbeoECUObjs[i].classification == 3) //ped
			//		|| (ol.IbeoECUObjs[i].classification == 4) //bicycle
			//		|| (ol.IbeoECUObjs[i].classification == 5) //car
			//		|| (ol.IbeoECUObjs[i].classification == 6) //truck
			//		|| (ol.IbeoECUObjs[i].classification == 15) //mbike
			//		) {
			//		addObj2Frame(frame, ol.IbeoECUObjs[i]);
			//	}

				//draw all objects
				//addObj2Frame(frame, ol.IbeoECUObjs[i]);


				//UDP
				 
				//sendList.SendStructData(ol.IbeoECUObjs[i]); //send obj
				//std::cerr << ol.IbeoECUObjs[i].cnt << std::endl;
				
				//Sleep(1);
			
			}
			//show frame
			//imshow("ECU IDC File Replay", frame);
			//waitKey(1);



			//do UDP sending
			sendList.SendStructData(ol); //send object list

			//sendList.SendStringData("test"); // send string



			objListQ.pop();
			std::cerr << "pop Q;  current Q size = " << objListQ.size() << std::endl;
		}
		else {
			std::cerr << "Q empty" << std::endl;
		}

		Sleep(5);
	}
}