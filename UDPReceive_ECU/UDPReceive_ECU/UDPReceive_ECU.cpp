// Siyang Liu (6796)
// NIO Automotives
// 2018-07-10
// UDPReceive_ECU.cpp: simualtes receiving via UDP

#include <iostream>
#include "stdafx.h"

#include "IbeoECUObjTypeDef.h"
#include "IbeoUDPReceive.h"


int main()
{
	IbeoUDPReceive receiveList;
	receiveList.InitSocket("100.100.0.5", "1001");
	cout << "Receive socket initialized " << endl;

	IbeoECUObjList ol;
	
	while (true)
	{
		/*map info receiver*/
		if (receiveList.ReceiveStructData(&ol))
		{
			cout << "received obj list size = " << ol.nbOfObjects << endl;
		}
		else
		{
			cout << "can not receive map" << endl;
			continue;
		}
	}
	return 0;
}

