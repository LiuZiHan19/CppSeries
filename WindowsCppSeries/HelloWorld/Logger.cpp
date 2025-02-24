#include <iostream>

void Info(const char* message)
{
	std::cout << "Info:" << message << std::endl;
}

void Info(const int& message)
{
	std::cout << "Info:" << message << std::endl;
}