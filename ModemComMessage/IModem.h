/**
 * @file IModem.h
 * @brief Describes the interface between ModemCom and the plugins
 * @author luguen
 * @date 15/05/2004
 */

#ifndef __IMODEM_H__
#define __IMODEM_H__

/**
 * @class IModem
 * @brief Describes the class IModem object
 */
class IModem
{
public:
	/**
	 * Constructor
	 */
	IModem()
	{
	}
	/**
	 * Destructor
	 */
	virtual ~IModem()
	{
	}

	/**
	 * getName
	 * @brief Get the name of the plugin
	 * @return The name of the plugin
	 */
	virtual void getName(char*) = 0;
	/**
	 * init
	 * @brief Initialize the plugin
	 */
	virtual void init(const char* szPluginsDir) = 0;
	/**
	 * putData
	 * @brief Put the data to the plugin
	 * @return true if the plugin is exclusive
	 * A plugin is exclusive if it handles a number and don't let the other plugins handle it
	 */
	virtual bool putData(char* szDate, char* szTime, char* szNumber, char* szName) = 0;
	/**
	 * configure
	 * @brief Configure the plugin
	 */
	virtual void* getPropertyPage() = 0;
	/**
	 * exit
	 * @brief Exit the plugin
	 */
	virtual void exit() = 0;
};

#endif