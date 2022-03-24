#pragma once

#include "iostream"
#include <string>

using namespace std;

class Clock
{
private:
	
	int hour;
	int minute;
	int seconds;

public:
	bool Init(int hour, int minute, int seconds);

	int getHour() const { return hour; }
	int getMinute() const { return minute; }
	int getSeconds() const { return seconds; }
	
	void setHour(int value) { hour = value; };
	void setMinute(int value) { minute = value; };
	void setSeconds(int value) { seconds = value; };

	void Read();
	void Display() const;

	string FirstTemplate() const;
	string SecondTemplate() const;

};