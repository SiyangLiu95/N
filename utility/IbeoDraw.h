// Siyang Liu (6796)
// NIO Automotives
// 2018-07-10
// IbeoDraw.h: defines visualization functions

#pragma once

#include <opencv2/opencv.hpp>

#include <iostream>
#include <queue>
#include <math.h>
#include <Windows.h>

#include "IbeoECUObjTypeDef.h"

#include "IbeoUDPSend.h"

using namespace cv;

#ifndef _IBEO_DRAW_
#define _IBEO_DRAW_

#define w 900 //define opencv window size
#define unit 50 //define length(m) of each step irl

extern std::queue<IbeoECUObjList> objListQ; //Queue objLists in main thread, pop in drawing thread

Scalar myColor(int& c);

void myRotate(float& x, float& y, float angle);

void addObj2Frame(Mat& img, IbeoECUObj& o);

void addLine(Mat& img, Point start, float angle, int length, Scalar color, int thickness);

void setBackground(Mat& img);

void drawFrame(Mat& fov); //unused

void doSubThread(); //draw frame + send obj list through UDP

#endif