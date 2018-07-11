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
	//��ʼ��socket
	bool InitSocket(const string strIPAddress, const string strPort);

	//����string����
	bool ReceiveStringData(string& strMessage);

	//���ܽṹ������
	//bool ReceiveStructData(Student *student);
	bool ReceiveStructData(SigCfgStr *sigCfgStr);

	bool ReceiveTrafficLightData(SigTrafficLight *sigTrafficLight);

	//����������
	bool ReceiveClassData(Person *person);

	void CloseSocket();

private:
	SOCKET m_socket; //socket;
	sockaddr_in m_sockLocalAddress;
	sockaddr_in m_sockReceiveAddress;
};

#endif  //RECEIVE_H_