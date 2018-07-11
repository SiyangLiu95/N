#include <iostream>
#include "udpReceive.h"

using namespace std;
udpReceive::udpReceive(void)
{
	m_socket = INVALID_SOCKET;

	//��ʼ��winsock
	WSAData ws;

	if (WSAStartup(MAKEWORD(1, 1), &ws))
	{
		cout << "WSAStartup failed" << WSAGetLastError() << endl;
	}
}

udpReceive::~udpReceive(void)
{
	WSACleanup();
}

bool udpReceive::InitSocket(const string strIPAddress, const string strPort)
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


bool udpReceive::ReceiveStringData(string& strMessage)
{

	m_sockReceiveAddress.sin_family = AF_INET;

	int iRecvLen = sizeof(m_sockReceiveAddress);

	// ���鲥��������ݱ�
	if (recvfrom(m_socket,
		//�������ݵĻ�����
		(char *)&strMessage,
		//����������
		100,
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

bool udpReceive::ReceiveStructData(SigCfgStr *sigCfgStr)
{
	m_sockReceiveAddress.sin_family = AF_INET;

	int iRecvLen = sizeof(m_sockReceiveAddress);

	//*��Ҫ���ݲ�ͬ�Ľṹ�嶨����е�����
	//Student recStudent;
	SigCfgStr recSigCfgStr;
	if (recvfrom(m_socket,
		//�������ݵĻ�����
		(char *)sigCfgStr,
		//����������
		sizeof(recSigCfgStr),
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

bool udpReceive::ReceiveTrafficLightData(SigTrafficLight *sigTrafficLight)
{
	m_sockReceiveAddress.sin_family = AF_INET;

	int iRecvLen = sizeof(m_sockReceiveAddress);

	//*��Ҫ���ݲ�ͬ�Ľṹ�嶨����е�����
	//Student recStudent;
	SigTrafficLight recSigTrafficLight;
	if (recvfrom(m_socket,
		//�������ݵĻ�����
		(char *)sigTrafficLight,
		//����������
		sizeof(recSigTrafficLight),
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

bool udpReceive::ReceiveClassData(Person *person)
{
	Person recPerson;
	m_sockReceiveAddress.sin_family = AF_INET;

	int iRecvLen = sizeof(m_sockReceiveAddress);

	// ���鲥��������ݱ�
	if (recvfrom(m_socket,
		//�������ݵĻ�����
		(char *)person,
		//����������
		sizeof(recPerson),
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

void udpReceive::CloseSocket()
{
	// �����׽���
	shutdown(m_socket, 0x00);

	// �ر��׽���
	closesocket(m_socket);
}