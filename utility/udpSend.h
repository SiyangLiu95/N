
#ifndef UDP_SEND_H_
#define UDP_SEND_H_

#include <string>
#include <WinSock.h>              //windows 网络的函数所在的头文件

#include "udpTypeDefine.h"

using namespace std;

class udpSend
{
public:
	udpSend(void);
public:
	~udpSend(void);

public:

	bool InitSocket(const string strIPAddress, const string strPort);

	void CleanSocket();

	//发送字符串数据
	bool SendStringData(const string strMessage);

	//发送指定结构体数据
	bool SendStructData(const Student student);

	//发送指定类数据
	bool udpSend::SendClassData(const Person person);

private:
	void InitSockAddress(const string strIPAddress, const string strPort);



private:
	SOCKET m_socket;       //socket
	sockaddr_in m_sockLocalAddress; //本地sock地址
	sockaddr_in m_sockDesAddress;   //目的sock地址
};


#endif  //UDP_SEND_H_