#include <iostream>

void Log(const char* message)
{
	std::cout << message << std::endl;
}

int LogInt(const char* value)
{
	std::cout << value << std::endl;
	return 0;
}