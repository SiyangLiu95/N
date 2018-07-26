// Siyang Liu (6796) implementing template by Siwei Peng
// NIO Automotives
// 2018-07-11
// IbeoUDPSend.cpp: Send objList struct through UDP

#include "IbeoUDPSend.h"

using namespace std;

IbeoUDPSend::IbeoUDPSend(void)
{
	m_socket = INVALID_SOCKET;

	WSAData ws;

	//每个Winsock程序必须使用WSAStartup载入合适的Winsock动态链接库，如果载入失败，WSAStartup将返回SOCKET_ERROR，这个错误就是WSANOTINITIALISED
	if (WSAStartup(MAKEWORD(1, 1), &ws) != 0)
	{
		cout << "WSAStartup failed! Error: " << WSAGetLastError() << endl;

	}
}

IbeoUDPSend::~IbeoUDPSend(void)
{
	WSACleanup();
}

bool IbeoUDPSend::InitSocket(const string strIPAddress, const string strPort)
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

void IbeoUDPSend::CleanSocket()
{
	shutdown(m_socket, 0x01);

	closesocket(m_socket);
}

bool IbeoUDPSend::SendStringData(const string strMessage)
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
		cout << "UDP: String sent" << endl;

		return true;
	}
}

bool IbeoUDPSend::SendStructData(const IbeoECUObjList objlist)
{

	//需要根据不同的结构体名称进行修改！
	if (sendto(m_socket,
		(char *) &objlist,
		//sizeof(IbeoECUObjList),
		sizeof(IbeoECUObj) * _MAX_OBJ_NUM_ + sizeof(uint8_t) + sizeof(uint32_t),
		0,
		(struct sockaddr FAR *) &m_sockDesAddress,
		sizeof(m_sockDesAddress)) == SOCKET_ERROR)
	{
		cout << "sendto failed! Error: " << WSAGetLastError() << endl;

		closesocket(m_socket);

		return false;
	}
	else
	{
		cout << "UDP: Ibeo ECU object list sent" << endl;
		return true;
	}
}

bool IbeoUDPSend::SendStructData(const IbeoECUObj obj)
{

	//需要根据不同的结构体名称进行修改！
	if (sendto(m_socket,
		(char *)&obj,
		sizeof(obj),
		0,
		(struct sockaddr FAR *) &m_sockDesAddress,
		sizeof(m_sockDesAddress)) == SOCKET_ERROR)
	{
		//报错
		cout << "sendto failed! Error: " << WSAGetLastError() << endl;

		closesocket(m_socket);

		return false;
	}
	else
	{
		//cout << "UDP: Ibeo ECU object sent" << endl;
		return true;
	}
}

void IbeoUDPSend::InitSockAddress(const string strIPAddress, const string strPort)
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
