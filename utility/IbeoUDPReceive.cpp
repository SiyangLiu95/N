// Siyang Liu (6796)
// NIO Automotives
// 2018-07-11
// IbeoUDPReceive.cpp: Receive objList struct via UDP

#include "IbeoUDPReceive.h"

using namespace std;

IbeoUDPReceive::IbeoUDPReceive(void)
{
	m_socket = INVALID_SOCKET;

	WSAData ws;

	if (WSAStartup(MAKEWORD(1, 1), &ws))
	{
		cout << "WSAStartup failed! Error: " << WSAGetLastError() << endl;

	}
}

IbeoUDPReceive::~IbeoUDPReceive(void)
{
	WSACleanup();
}

bool IbeoUDPReceive::InitSocket(const string strIPAddress, const string strPort)
{

	// �������ݱ����͵�socket
	if ((m_socket = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP)) == INVALID_SOCKET)
	{
		//����
		cout << "Allocating socket failed! Error:" << WSAGetLastError() << endl;

		return FALSE;
	}

	// �趨����Socket��ַ��Ϣ
	//IPv4�汾
	m_sockLocalAddress.sin_family = AF_INET;
	//�˿�
	m_sockLocalAddress.sin_port = htons(atol(strPort.c_str()));
	//��ַ
	m_sockLocalAddress.sin_addr.s_addr = 0;


	m_sockReceiveAddress.sin_family = AF_INET;
	//�˿�
	m_sockReceiveAddress.sin_port = htons(atol(strPort.c_str()));
	//��ַ
	m_sockReceiveAddress.sin_addr.s_addr = INADDR_BROADCAST;

	// ��
	if (bind(m_socket,
		(struct sockaddr FAR *) &m_sockLocalAddress,
		sizeof(m_sockLocalAddress)) == SOCKET_ERROR)
	{
		//����
		cout << "Binding socket failed! Error: " << WSAGetLastError() << endl;
		closesocket(m_socket);
		return FALSE;
	}

	bool bOpt = true;
	setsockopt(m_socket, SOL_SOCKET, SO_BROADCAST, (char*)&bOpt, sizeof(bOpt));

	return true;


}

void IbeoUDPReceive::CleanSocket()
{
	shutdown(m_socket, 0x00);

	closesocket(m_socket);
}

bool IbeoUDPReceive::ReceiveStructData(IbeoECUObjList* objlist)
{
	//��Ҫ���ݲ�ͬ�Ľṹ�����ƽ����޸ģ�
	m_sockReceiveAddress.sin_family = AF_INET;

	int iRecvLen = sizeof(m_sockReceiveAddress);

	IbeoECUObjList ol;

	if (recvfrom(m_socket,
		//�������ݵĻ�����
		(char *)&ol,
		//����������
		sizeof(ol),
		//�������ݵķ�ʽ
		0,
		(struct sockaddr FAR *)&m_sockReceiveAddress,
		&iRecvLen) == SOCKET_ERROR)
	{
		//����		
		cout << "recvfrom failed! Error: " << WSAGetLastError() << endl;
		closesocket(m_socket);
		return FALSE;
	}
	else
	{
		return true;
	}
}
