#include <iostream>
#include "Clock.h"
#include <Windows.h>

using namespace std;

Clock MakeClock(int hour, int minute, int seconds)
{
	Clock k;
	if (!k.Init(hour, minute, seconds))
		cout << "Wrong arguments to Init!" << endl;
	return k;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Clock g;
	g.Read();
	g.Display();
	cout << g.FirstTemplate() << endl;
	cout << g.SecondTemplate() << endl;

	return 0;
}