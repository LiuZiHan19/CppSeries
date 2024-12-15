#include <iostream>
#include "Log.h"

void LinkerTest()
{
	Log("Hello from Log!");

	for (size_t i = 0; i < 5; i++)
	{
		Log("Hello from Log!");
	}
}

int main()
{


	std::cout << "Hello World" << std::endl;

	LinkerTest();

	std::cin.get();
}