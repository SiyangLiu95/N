#include <iostream>
#include "udpReceive.h"

using namespace std;
udpReceive::udpReceive(void)
{
	m_socket = INVALID_SOCKET;

	//初始化winsock
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

	// 创建数据报类型的socket
	if ((m_socket = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP)) == INVALID_SOCKET)
	{
		//报错
		cout << "Allocating socket failed! Error:" << WSAGetLastError() << endl;

		return FALSE;
	}

	// 设定本地Socket地址信息
	//IPv4版本
	m_sockLocalAddress.sin_family = AF_INET;
	//端口
	m_sockLocalAddress.sin_port = htons(atol(strPort.c_str()));
	//地址
	m_sockLocalAddress.sin_addr.s_addr = 0;


	m_sockReceiveAddress.sin_family = AF_INET;
	//端口
	m_sockReceiveAddress.sin_port = htons(atol(strPort.c_str()));
	//地址
	m_sockReceiveAddress.sin_addr.s_addr = INADDR_BROADCAST;

	// 绑定
	if (bind(m_socket,
		(struct sockaddr FAR *) &m_sockLocalAddress,
		sizeof(m_sockLocalAddress)) == SOCKET_ERROR)
	{
		//报错
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

	// 从组播组接收数据报
	if (recvfrom(m_socket,
		//接收数据的缓冲区
		(char *)&strMessage,
		//缓冲区长度
		100,
		//接收数据的方式
		0,
		(struct sockaddr FAR *)&m_sockReceiveAddress,
		&iRecvLen) == SOCKET_ERROR)
	{
		//报错		
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

	//*需要根据不同的结构体定义进行调整！
	//Student recStudent;
	SigCfgStr recSigCfgStr;
	if (recvfrom(m_socket,
		//接收数据的缓冲区
		(char *)sigCfgStr,
		//缓冲区长度
		sizeof(recSigCfgStr),
		//接收数据的方式
		0,
		(struct sockaddr FAR *)&m_sockReceiveAddress,
		&iRecvLen) == SOCKET_ERROR)
	{
		//报错		
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

	//*需要根据不同的结构体定义进行调整！
	//Student recStudent;
	SigTrafficLight recSigTrafficLight;
	if (recvfrom(m_socket,
		//接收数据的缓冲区
		(char *)sigTrafficLight,
		//缓冲区长度
		sizeof(recSigTrafficLight),
		//接收数据的方式
		0,
		(struct sockaddr FAR *)&m_sockReceiveAddress,
		&iRecvLen) == SOCKET_ERROR)
	{
		//报错		
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

	// 从组播组接收数据报
	if (recvfrom(m_socket,
		//接收数据的缓冲区
		(char *)person,
		//缓冲区长度
		sizeof(recPerson),
		//接收数据的方式
		0,
		(struct sockaddr FAR *)&m_sockReceiveAddress,
		&iRecvLen) == SOCKET_ERROR)
	{
		//报错		
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
	// 禁用套接字
	shutdown(m_socket, 0x00);

	// 关闭套接字
	closesocket(m_socket);
}