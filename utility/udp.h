#ifndef _UDP_H
#define _UDP_H

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <sstream> 
#include <math.h>
#include <windows.h>
#include <vector>
#include <iomanip>
#include <process.h>
#include "dbc_cfg.h"
#include "time.h"
#include "udpReceive.h"
#include "udpSend.h"
#include "a2b_sig_cfg.h"

DWORD WINAPI UDP_API(LPVOID lpParameter);
DWORD WINAPI UDP_MAP(LPVOID lpParameter);
DWORD WINAPI UDP_CAMERA(LPVOID lpParameter);

#endif //_UDP_H