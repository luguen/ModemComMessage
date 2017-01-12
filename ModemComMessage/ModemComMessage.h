#pragma once

#include "IModem.h"

class CModemComMessage : public IModem
{
public:
	CModemComMessage();
	virtual ~CModemComMessage();

	void getName(char* szName);
	void init(const char* szPluginsDir);
	bool putData(char* szDate, char* szTime, char* szNumber, char* szName);
	void* getPropertyPage();
	void exit();
};

extern "C" __declspec(dllexport)
IModem* createModemComPluginImpl()
{
	return new CModemComMessage();
}