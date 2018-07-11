#ifndef UDP_TYPE_DEFINE_H_
#define UDP_TYPE_DEFINE_H_

#include <string>
class Person
{
public:
	Person(void){};
public:
	~Person(void){};
public:
	std::string name;
	int age;
	double height;
};

struct Student{
	int id;
	double score;
	std::string name;
};

struct SigCfgStr
{
	//*道路信息*
	unsigned char RoadProperty_Map;
	// 0 起点
	// 1 入路口
	// 2 路口中
	// 3 出路口
	// 4 道路中
	// 5 终点

	float IntersectionDist_Map; //距路口点(终止线)距离

	unsigned char DangerProperty_Map; //前方危险点属性 1，2，3不同危险等级，1危险等级最高

	float DangerDist_Map; //距前方危险点距离

	unsigned char FunctionIndex_Map;
	// 5 "Reserved"
	// 4 "ADAS"
	// 3 "AD"
	// 2 "ParkingOut"
	// 1 "APA"
	// 0 "None"

	float SpeedLimit_Map; // 速度上限

	unsigned char Direction_Map; // 路口行驶方向
	// 1 直行
	// 2 左转
	// 3 右转

	//*道路轨迹* C0 C1 C2 C3 C4 C5
	float Trajectory_C0_Map;
	float Trajectory_C1_Map;
	float Trajectory_C2_Map;
	float Trajectory_C3_Map;
	float Trajectory_C4_Map;
	float Trajectory_C5_Map;

	//*车道信息*
	unsigned char LaneNum_Map;  // 车道总数

	unsigned char WayNum_Map;  // 单向车道的总数

	unsigned char LaneId_Map;  // 应行驶的车道ID 最左侧车道ID为1

	unsigned char OneTwoWay_Map; // 是否为单双向车道 1 单向 2 双向

	//int8 LaneProperty[10]; // 车道线属性
	double PortLatitude;
	double PortLongitude;
};

struct SigPositionInfo
{
	double PortLongitude;
	double PortLatitude;
	double PortYaw;
	double PortYawRate;
	double PortRoll;
	double PortRollRate;
	double PortPitch;
	double PortPitchRate;
	double PortGroundSpeed;
	double PortTime;
	double PortGPSTime;
	int contNum;
};

struct SigTrafficLight
{
	unsigned char TrafficLightColor_Cam;
	// 0 undefined;
	// 1 red;
	// 2 yellow;
	// 3 green;
	unsigned char countNum;

};

#endif  //UDP_TYPE_DEFINE_H_
