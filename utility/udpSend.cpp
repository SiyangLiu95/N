
#include <iostream>

#include "udpSend.h"

using namespace std;

udpSend::udpSend(void)
{
	m_socket = INVALID_SOCKET;

	WSAData ws;

	//ÿ��Winsock�������ʹ��WSAStartup������ʵ�Winsock��̬���ӿ⣬�������ʧ�ܣ�WSAStartup������SOCKET_ERROR������������WSANOTINITIALISED
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

	//�����׽���,ipv4,���ģ�udpЭ��
	m_socket = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);

	//����socketʧ��
	if (INVALID_SOCKET == m_socket)
	{
		cout << "failed to create socket" << endl;

		return false;
	}

	//��ʼ��sock��ַ
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
		//����

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
	//��Ҫ���ݲ�ͬ�Ľṹ�����ƽ����޸ģ�
	if (sendto(m_socket,
		(char *)&student,
		sizeof(student),
		0,
		(struct sockaddr FAR *) &m_sockDesAddress,
		sizeof(m_sockDesAddress)) == SOCKET_ERROR)
	{
		//����
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
	//��Ҫ���ݲ�ͬ�������ƽ����޸ģ�
	if (sendto(m_socket,
		(char *)&person,
		sizeof(person),
		0,
		(struct sockaddr FAR *) &m_sockDesAddress,
		sizeof(m_sockDesAddress)) == SOCKET_ERROR)
	{
		//����

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
	//����sock��ַ����
	m_sockLocalAddress.sin_family = AF_INET;     //ipv4��ַ����
	m_sockLocalAddress.sin_addr.S_un.S_addr = htonl(INADDR_ANY);
	m_sockLocalAddress.sin_port = htons(0);
	memset(m_sockLocalAddress.sin_zero, 0, 8);

	//Ŀ��sock��ַ����
	//IPv4�汾
	m_sockDesAddress.sin_family = AF_INET;
	//�˿�
	m_sockDesAddress.sin_port = htons(atol(strPort.c_str()));
	//��ַ
	m_sockDesAddress.sin_addr.s_addr = INADDR_BROADCAST;

}
