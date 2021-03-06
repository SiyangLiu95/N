// Siyang Liu (6796) implementing template by Siwei Peng
// NIO Automotives
// 2018-07-11
// IbeoUDPReceive.h: Receive objList struct via UDP

#include <string>
#include <iostream>
#include <WinSock.h>

#include "IbeoECUObjTypeDef.h"

using namespace std;

#ifndef _IBEO_ECU_OBJ_UDP_RECEIVE_
#define _IBEO_ECU_OBJ_UDP_RECEIVE_



class IbeoUDPReceive
{

public:
	IbeoUDPReceive(void);
public:
	~IbeoUDPReceive(void);

public:

	bool InitSocket(const string strIPAddress, const string strPort);

	void CleanSocket();

	bool ReceiveStringData(string& strMessage);
	bool ReceiveStructData(IbeoECUObjList* objlist);
	bool ReceiveStructData(IbeoECUObj* obj);
private:
	SOCKET m_socket;
	sockaddr_in m_sockLocalAddress; //local socket + address
	sockaddr_in m_sockReceiveAddress;   //receive socket + address
};

#endif