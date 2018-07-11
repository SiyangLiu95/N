#ifndef	UDP_RECEIVE_H_
#define UDP_RECEIVE_H_

#include <string>
#include <WinSock.h>
#include "udpTypeDefine.h"

using namespace std;
class udpReceive
{
public:
	udpReceive(void);
public:
	~udpReceive(void);

public:
	//初始化socket
	bool InitSocket(const string strIPAddress, const string strPort);

	//接受string数据
	bool ReceiveStringData(string& strMessage);

	//接受结构体数据
	//bool ReceiveStructData(Student *student);
	bool ReceiveStructData(SigCfgStr *sigCfgStr);

	bool ReceiveTrafficLightData(SigTrafficLight *sigTrafficLight);

	//接受类数据
	bool ReceiveClassData(Person *person);

	void CloseSocket();

private:
	SOCKET m_socket; //socket;
	sockaddr_in m_sockLocalAddress;
	sockaddr_in m_sockReceiveAddress;
};

#endif  //RECEIVE_H_