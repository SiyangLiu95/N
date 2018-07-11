#include "udp.h"

double g_GPSLonFromMap;
double g_GPSLatFromMap;
DWORD WINAPI UDP_API(LPVOID lpParameter)
{
	HANDLE hThread_Map;
	hThread_Map = CreateThread(NULL, 0, UDP_MAP, NULL, 0, NULL);

	HANDLE hThread_Camera;
	hThread_Map = CreateThread(NULL, 0, UDP_CAMERA, NULL, 0, NULL);

	return 0;
}

DWORD WINAPI UDP_MAP(LPVOID lpParameter)
{
	udpReceive receiveMap;
	receiveMap.InitSocket("100.100.0.2", "1001");
	SigCfgStr testSigCfgStr;
	//cout << "open map" << endl;

	while (true)
	{
		/*map info receiver*/
		if (receiveMap.ReceiveStructData(&testSigCfgStr))
		{
			DangerDist_Map = testSigCfgStr.DangerDist_Map;
			DangerProperty_Map = testSigCfgStr.DangerProperty_Map;
			Direction_Map = testSigCfgStr.Direction_Map;
			FunctionIndex_Map = testSigCfgStr.FunctionIndex_Map;
			IntersectionDist_Map = testSigCfgStr.IntersectionDist_Map;

			LaneId_Map = testSigCfgStr.LaneId_Map;
			LaneNum_Map = testSigCfgStr.LaneNum_Map;
			WayNum_Map = testSigCfgStr.WayNum_Map;
			OneTwoWay_Map = testSigCfgStr.OneTwoWay_Map;

			RoadProperty_Map = testSigCfgStr.RoadProperty_Map;
			SpeedLimit_Map = testSigCfgStr.SpeedLimit_Map;

			Trajectory_C0_Map = testSigCfgStr.Trajectory_C0_Map;
			Trajectory_C1_Map = testSigCfgStr.Trajectory_C1_Map;
			Trajectory_C2_Map = testSigCfgStr.Trajectory_C2_Map;
			Trajectory_C3_Map = testSigCfgStr.Trajectory_C3_Map;
			Trajectory_C4_Map = testSigCfgStr.Trajectory_C4_Map;
			Trajectory_C5_Map = testSigCfgStr.Trajectory_C5_Map;
			g_GPSLonFromMap = testSigCfgStr.PortLongitude;
			g_GPSLatFromMap = testSigCfgStr.PortLatitude;
			cout << Trajectory_C0_Map << endl;
			cout << Trajectory_C1_Map << endl;
			cout << Trajectory_C2_Map << endl;
		}
		else
		{
			cout << "can not receive map" << endl;
			continue;
		}
	}
}

DWORD WINAPI UDP_CAMERA(LPVOID lpParameter)
{
	udpReceive receiveCamera;
	receiveCamera.InitSocket("100.100.0.2", "1005");
	SigTrafficLight testSigTrafficLight;
	TrafficLight_Cam = 0;
	int curCountNum, preCountNum;
	curCountNum = preCountNum = 0;
	//cout << "open camera" << endl;

	while (true)
	{
		//Traffic Light receiver
		if (receiveCamera.ReceiveTrafficLightData(&testSigTrafficLight))
		{
			curCountNum = testSigTrafficLight.countNum;
			TrafficLight_Cam = testSigTrafficLight.TrafficLightColor_Cam;
			if (curCountNum == preCountNum)
			{
				TrafficLight_Cam = 0;
			}
			preCountNum = curCountNum;
			switch (TrafficLight_Cam)
			{
				case 0:
					cout << "undefined" << endl;
					break;
				case 1:
					cout << "red" << endl;
					break;
				case 2:
					cout << "yellow" << endl;
					break;
				case 3:
					cout << "green" << endl;
					break;
			}
		}
		else
		{
			cout << "can not receive camera" << endl;
			continue;
		}
	}
}