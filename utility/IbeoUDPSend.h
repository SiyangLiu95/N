﻿// Siyang Liu (6796) implementing template from Siwei Peng
// NIO Automotives
// 2018-07-11
// IbeoUDPSend.h: Send objList struct through UDP

#pragma once

using namespace std;

#ifndef _IBEO_ECU_OBJ_UDP_SEND_
#define _IBEO_ECU_OBJ_UDP_SEND_

#include <string>
#include <iostream>
#include <WinSock.h>

#include "IbeoECUObjTypeDef.h"

class IbeoUDPSend
{

public:
	IbeoUDPSend(void);
public:
	~IbeoUDPSend(void);

public:

	bool InitSocket(const string strIPAddress, const string strPort);

	void CleanSocket();

	//发送字符串数据
	bool SendStringData(const string strMessage);

	//发送指定结构体数据
	bool SendStructData(const IbeoECUObj objlist);

private:
	void InitSockAddress(const string strIPAddress, const string strPort);

private:
	SOCKET m_socket;       
	sockaddr_in m_sockLocalAddress; //local socket + address
	sockaddr_in m_sockDesAddress;   //destination socket + address
};

#endif