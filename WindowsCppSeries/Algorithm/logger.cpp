#include <iostream>
#include "Logger.h"

void NewLine()
{
	std::cout << std::endl;
}

void Log(const char* message)
{
	std::cout << "[Log]:" << message << std::endl;
}

void Warning(const char* message)
{
	std::cout << "[Warning]:" << message << std::endl;
}

void Error(const char* message)
{
	std::cout << "[Error]:" << message << std::endl;
}
