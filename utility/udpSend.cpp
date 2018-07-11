
#include <iostream>

#include "udpSend.h"

using namespace std;

udpSend::udpSend(void)
{
	m_socket = INVALID_SOCKET;

	WSAData ws;

	//每个Winsock程序必须使用WSAStartup载入合适的Winsock动态链接库，如果载入失败，WSAStartup将返回SOCKET_ERROR，这个错误就是WSANOTINITIALISED
	if (WSAStartup(MAKEWORD(1, 1), &ws) != 0)
	{
		cout << "WSAStartup failed! Error: " << WSAGetLastError() << endl;

	}
}

udpSend::~udpSend(void)
{
	WSACleanup();
}

bool udpSend::InitSocket(const string strIPAddress, const string strPort)
{

	//创建套接字,ipv4,报文，udp协议
	m_socket = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);

	//创建socket失败
	if (INVALID_SOCKET == m_socket)
	{
		cout << "failed to create socket" << endl;

		return false;
	}

	//初始化sock地址
	InitSockAddress(strIPAddress, strPort);

	bool bOpt = true;
	setsockopt(m_socket, SOL_SOCKET, SO_BROADCAST, (char*)&bOpt, sizeof(bOpt));

	return true;



}

void udpSend::CleanSocket()
{
	shutdown(m_socket, 0x01);

	closesocket(m_socket);
}


bool udpSend::SendStringData(const string strMessage)
{

	if (sendto(m_socket,
		(char *)&strMessage,
		sizeof(strMessage),
		0,
		(struct sockaddr FAR *) &m_sockDesAddress,
		sizeof(m_sockDesAddress)) == SOCKET_ERROR)
	{
		//报错

		cout << "sendto failed! Error: %d" << WSAGetLastError() << endl;

		closesocket(m_socket);


		return false;

	}
	else
	{
		return true;
	}
}


bool udpSend::SendStructData(const Student student)
{
	//需要根据不同的结构体名称进行修改！
	if (sendto(m_socket,
		(char *)&student,
		sizeof(student),
		0,
		(struct sockaddr FAR *) &m_sockDesAddress,
		sizeof(m_sockDesAddress)) == SOCKET_ERROR)
	{
		//报错
		cout << "sendto failed! Error: %d" << WSAGetLastError() << endl;

		closesocket(m_socket);

		return false;

	}
	else
	{
		return true;
	}
}


bool udpSend::SendClassData(const Person person)
{
	//需要根据不同的类名称进行修改！
	if (sendto(m_socket,
		(char *)&person,
		sizeof(person),
		0,
		(struct sockaddr FAR *) &m_sockDesAddress,
		sizeof(m_sockDesAddress)) == SOCKET_ERROR)
	{
		//报错

		cout << "sendto failed! Error: %d" << WSAGetLastError() << endl;

		closesocket(m_socket);


		return false;

	}
	else
	{
		return true;
	}
}


void udpSend::InitSockAddress(const string strIPAddress, const string strPort)
{
	//本地sock地址设置
	m_sockLocalAddress.sin_family = AF_INET;     //ipv4地址类型
	m_sockLocalAddress.sin_addr.S_un.S_addr = htonl(INADDR_ANY);
	m_sockLocalAddress.sin_port = htons(0);
	memset(m_sockLocalAddress.sin_zero, 0, 8);

	//目的sock地址设置
	//IPv4版本
	m_sockDesAddress.sin_family = AF_INET;
	//端口
	m_sockDesAddress.sin_port = htons(atol(strPort.c_str()));
	//地址
	m_sockDesAddress.sin_addr.s_addr = INADDR_BROADCAST;

}
