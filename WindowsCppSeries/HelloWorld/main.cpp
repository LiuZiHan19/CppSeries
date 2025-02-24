#include <iostream>
#include "Log.h";

int main()
{
	int a = 2;
	int* aptr = &a;
	int** aptrptr = &aptr;
	**aptrptr = 5;
	Info(a);

	Info("Test");
	return 0;
}