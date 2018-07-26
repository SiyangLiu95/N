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

	//ÿ��Winsock�������ʹ��WSAStartup������ʵ�Winsock��̬���ӿ⣬�������ʧ�ܣ�WSAStartup������SOCKET_ERROR������������WSANOTINITIALISED
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
		//����

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

	//��Ҫ���ݲ�ͬ�Ľṹ�����ƽ����޸ģ�
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

	//��Ҫ���ݲ�ͬ�Ľṹ�����ƽ����޸ģ�
	if (sendto(m_socket,
		(char *)&obj,
		sizeof(obj),
		0,
		(struct sockaddr FAR *) &m_sockDesAddress,
		sizeof(m_sockDesAddress)) == SOCKET_ERROR)
	{
		//����
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
