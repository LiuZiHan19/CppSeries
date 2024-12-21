#include <iostream>
#include "Log.h"

enum LogLevel
{
	LogLevel_Info,
	LogLevel_Warning,
	LogLevel_Error
};

class Logger
{
private:
	LogLevel m_LogLevel = LogLevel_Info;

public:
	void SetLogLevel(LogLevel level)
	{
		m_LogLevel = level;
	}

	void Info(const char* message)
	{
		if (m_LogLevel <= LogLevel_Info)
		{
			std::cout << "[INFO]: " << message << std::endl;
		}
	}

	void Warn(const char* message)
	{
		if (m_LogLevel <= LogLevel_Warning)
		{
			std::cout << "[WARNING]: " << message << std::endl;
		}
	}

	void Error(const char* message)
	{
		if (m_LogLevel <= LogLevel_Error)
		{
			std::cout << "[ERROR]: " << message << std::endl;
		}
	}
};

int main()
{
	Logger logger;

	std::cin.get();
}

