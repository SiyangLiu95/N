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

void IbeoUDPReceive::CleanSocket()
{
	shutdown(m_socket, 0x00);

	closesocket(m_socket);
}

bool IbeoUDPReceive::ReceiveStructData(IbeoECUObjList* objlist)
{
	//需要根据不同的结构体名称进行修改！
	m_sockReceiveAddress.sin_family = AF_INET;

	int iRecvLen = sizeof(m_sockReceiveAddress);

	IbeoECUObjList ol;

	if (recvfrom(m_socket,
		//接收数据的缓冲区
		(char *)&ol,
		//缓冲区长度
		sizeof(ol),
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
