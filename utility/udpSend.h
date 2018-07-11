
#ifndef UDP_SEND_H_
#define UDP_SEND_H_

#include <string>
#include <WinSock.h>              //windows ����ĺ������ڵ�ͷ�ļ�

#include "udpTypeDefine.h"

using namespace std;

class udpSend
{
public:
	udpSend(void);
public:
	~udpSend(void);

public:

	bool InitSocket(const string strIPAddress, const string strPort);

	void CleanSocket();

	//�����ַ�������
	bool SendStringData(const string strMessage);

	//����ָ���ṹ������
	bool SendStructData(const Student student);

	//����ָ��������
	bool udpSend::SendClassData(const Person person);

private:
	void InitSockAddress(const string strIPAddress, const string strPort);



private:
	SOCKET m_socket;       //socket
	sockaddr_in m_sockLocalAddress; //����sock��ַ
	sockaddr_in m_sockDesAddress;   //Ŀ��sock��ַ
};


#endif  //UDP_SEND_H_