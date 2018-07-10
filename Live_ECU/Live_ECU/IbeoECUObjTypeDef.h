// Siyang Liu (6796)
// Nio Automotives
// 2018-07-10
// IbeoECUObjTypeDef.h: define object struct types

#pragma once

#include <iostream>
#include <cstdlib>

#ifndef _SIYANG_LIU_IBEO_ECU_OBJ_
#define _SIYANG_LIU_IBEO_ECU_OBJ_

typedef struct {
	uint16_t objID;
	uint16_t flag;  /*	Flags_TrackedByStationaryModel  = 0x0040, ///< is object tracked using stationary model
						Flags_Mobile                    = 0x0080, ///< Has been detected/validated as mobile. (the current tracking model is irrelevant; this flag just means it has been moving at some time)
						Flags_Validated                 = 0x0100  ///< Object (stationary or dynamic) has been validated, i.e. valid enough to send out to the interface */
	bool trackedByStationaryModel;
	bool mobile;
	bool motionModelValidated;
	uint32_t objAge;
	uint32_t timestamp; // avaiable: Frac, Milli, Micro seconds
	uint16_t objPredAge;
	int classification;
	uint8_t classCertainty;
	uint32_t classAge;
	float centerX;
	float centerY; //Sigma not available yet
	float length; //Box.X
	float width; //Box.Y
	float orientation; //rad
	float orientationSigma;
	float relVelX;
	float relVelY;
	float relVelSigmaX;
	float relVelSigmaY;
	float absVelX;
	float absVelY;
	float absVelSigmaX;
	float absVelSigmaY;
	/*Other avaiable fields:
	nbOfContourPoints;
	IdxOfclosestPoint;
	RefPointLocation;
	RefPointCoords+Sigma;
	RefPointPosCorrCoeffs;
	ObjPriority;
	ObjExtMeasurement;
	List of Contour Points;
	*/
}IbeoECUObj;

#endif

#ifndef _SIYANG_LIU_IBEO_ECU_OBJ_LIST_
#define _SIYANG_LIU_IBEO_ECU_OBJ_LIST_

#define _MAX_OBJ_NUM_ 1023

typedef struct {
	uint32_t scanStartTimestamp; // avaiable: Frac, Milli, Micro seconds
	int nbOfObjects;

	IbeoECUObj IbeoECUObjs[_MAX_OBJ_NUM_];

} IbeoECUObjList;

#endif
