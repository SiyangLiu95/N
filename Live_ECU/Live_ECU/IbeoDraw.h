// Siyang Liu (6796)
// Nio Automotives
// 2018-07-10
// IbeoDraw.h: defines visualization functions + UDP Sending functions

#pragma once

#include <opencv2/opencv.hpp>

#include <queue>
#include <math.h>
#include <Windows.h>

#include "IbeoECUObjTypeDef.h"

using namespace cv;

#ifndef _SIYANG_LIU_IBEO_DRAW_
#define _SIYANG_LIU_IBEO_DRAW_

#define w 900 //define opencv window size
#define unit 50 //define length(m) of each step irl

extern bool hasNewObjList;
extern std::queue<IbeoECUObjList> objListQ;

Scalar myColor(int& c);

void myRotate(float& x, float& y, float angle);

void addObj2Frame(Mat& img, IbeoECUObj& o);

void addLine(Mat& img, Point start, float angle, int length, Scalar color, int thickness);

void setBackground(Mat& img);

void drawFrame(IbeoECUObjList& ol); //takes in an entire object list and draw all objects

#endif