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
	//*��·��Ϣ*
	unsigned char RoadProperty_Map;
	// 0 ���
	// 1 ��·��
	// 2 ·����
	// 3 ��·��
	// 4 ��·��
	// 5 �յ�

	float IntersectionDist_Map; //��·�ڵ�(��ֹ��)����

	unsigned char DangerProperty_Map; //ǰ��Σ�յ����� 1��2��3��ͬΣ�յȼ���1Σ�յȼ����

	float DangerDist_Map; //��ǰ��Σ�յ����

	unsigned char FunctionIndex_Map;
	// 5 "Reserved"
	// 4 "ADAS"
	// 3 "AD"
	// 2 "ParkingOut"
	// 1 "APA"
	// 0 "None"

	float SpeedLimit_Map; // �ٶ�����

	unsigned char Direction_Map; // ·����ʻ����
	// 1 ֱ��
	// 2 ��ת
	// 3 ��ת

	//*��·�켣* C0 C1 C2 C3 C4 C5
	float Trajectory_C0_Map;
	float Trajectory_C1_Map;
	float Trajectory_C2_Map;
	float Trajectory_C3_Map;
	float Trajectory_C4_Map;
	float Trajectory_C5_Map;

	//*������Ϣ*
	unsigned char LaneNum_Map;  // ��������

	unsigned char WayNum_Map;  // ���򳵵�������

	unsigned char LaneId_Map;  // Ӧ��ʻ�ĳ���ID ����೵��IDΪ1

	unsigned char OneTwoWay_Map; // �Ƿ�Ϊ��˫�򳵵� 1 ���� 2 ˫��

	//int8 LaneProperty[10]; // ����������
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
