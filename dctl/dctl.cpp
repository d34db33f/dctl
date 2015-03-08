// dctl.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <Windows.h>

int _tmain(int argc, _TCHAR* argv[])
{
	if(argc!=2) {
		printf("ERROR: Call \"%s 1|0\"\n",argv[0]);
		return 1;
	}
	if(strcmp(argv[1],"0")==0)
		SendMessage(HWND_BROADCAST,WM_SYSCOMMAND,SC_MONITORPOWER,2);
	else if(strcmp(argv[1],"1")==0)
		SendMessage(HWND_BROADCAST,WM_SYSCOMMAND,SC_MONITORPOWER,-1);
	else {
		printf("ERROR: Invalid value\n");
		return 1;
	}
	return 0;
}

