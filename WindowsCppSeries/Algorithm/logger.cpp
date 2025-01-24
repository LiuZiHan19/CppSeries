#include <iostream>
#include "Logger.h"

using namespace std;

void Line()
{
	cout << endl;
}

void Log(const char* message)
{
	cout << "[Log]:" << message << endl;
}

void Warning(const char* message)
{
	cout << "[Warning]:" << message << endl;
}

void Error(const char* message)
{
	cout << "[Error]:" << message << endl;
}
