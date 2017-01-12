#include "ModemComMessage.h"

#include <iostream>
#include "windows.h"


CModemComMessage::CModemComMessage()
{
}

CModemComMessage::~CModemComMessage()
{
}

void CModemComMessage::getName(char* szName)
{
	sprintf(szName, "ModemComMessage");
}

void CModemComMessage::init(const char* szPluginsDir)
{
}

bool CModemComMessage::putData(char* szDate, char* szTime, char* szNumber, char* szName)
{
	char _szMsg[256];
	sprintf(_szMsg, "[Le:%s]\n[A:%s]\n[Num:%s]\n[Nom:%s]", szDate, szTime, szNumber, szName);
	MessageBox(NULL, _szMsg, "Appel !", MB_ICONINFORMATION | MB_OK);

	// Stop the process now
	return true;
}

void* CModemComMessage::getPropertyPage()
{
	return 0;
}

void CModemComMessage::exit()
{
}