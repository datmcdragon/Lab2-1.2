#include "Clock.h"
#include <iostream>
#include <sstream>

using namespace std;


bool Clock::Init(int hour, int minute, int seconds)
{
	if (hour > 0 && hour <= 23 && minute > 0 && minute <=59 && seconds > 0 && seconds <= 59)
	{
				setHour(hour);
				setMinute(minute);
				setSeconds(seconds);
				return true;
	}
	else
		return false;
}

void Clock::Read()
{
	int hour, minute, seconds;
	do
	{
		cout << " Hour = "; cin >> hour;
		cout << " Minute = "; cin >> minute;
		cout << " Seconds = "; cin >> seconds;

	} while (!Init(hour, minute, seconds));
}

void Clock::Display() const
{
		cout << "Hour = " << getHour() << endl;
		cout << "Minute = " << getMinute() << endl;
		cout << "Seconds = " << getSeconds() << endl;
}

string Clock::FirstTemplate() const
{
	stringstream ss;
	ss << hour << " години " << minute << " хвилини " << seconds << " секунди ";

	return (ss.str());
}



string Clock::SecondTemplate() const
{
	stringstream ss;
	ss << (hour > 12 ? hour %12 : hour) << " p.m " << minute << " хвилини " << seconds << " секунди ";

	return (ss.str());
}



