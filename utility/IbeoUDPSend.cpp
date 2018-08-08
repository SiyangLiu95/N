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
	m_socket = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);

	if (INVALID_SOCKET == m_socket)
	{
		cout << "failed to create socket" << endl;

		return false;
	}

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
		cout << "Send string failed! Error: %d" << WSAGetLastError() << endl;

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
	//cout << "Size of object list: " << sizeof(IbeoECUObjList) << endl; 
	if (sendto(m_socket,
		(char *) &objlist,
		//sizeof(IbeoECUObjList),
		10208 + sizeof(float)*64*2,
		0,
		(struct sockaddr FAR *) &m_sockDesAddress,
		sizeof(m_sockDesAddress)) == SOCKET_ERROR)
	{
		cout << "Send Object List failed! Error: " << WSAGetLastError() << endl;

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
	if (sendto(m_socket,
		(char *)&obj,
		sizeof(obj),
		0,
		(struct sockaddr FAR *) &m_sockDesAddress,
		sizeof(m_sockDesAddress)) == SOCKET_ERROR)
	{
		cout << "Send Object failed! Error: " << WSAGetLastError() << endl;

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
	m_sockLocalAddress.sin_family = AF_INET;
	m_sockLocalAddress.sin_addr.S_un.S_addr = htonl(INADDR_ANY);
	m_sockLocalAddress.sin_port = htons(0);
	//memset(m_sockLocalAddress.sin_zero, 0, 8);

	m_sockDesAddress.sin_family = AF_INET;
	m_sockDesAddress.sin_port = htons(atol(strPort.c_str()));
	m_sockDesAddress.sin_addr.s_addr = INADDR_BROADCAST;
}
