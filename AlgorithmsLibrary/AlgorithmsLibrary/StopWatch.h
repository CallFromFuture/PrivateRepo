#pragma once
#include <Windows.h>
class CStopWatch
{
public:
	CStopWatch();
	void start();
	void stop();
	double getElapsedTime(); //in s
private:
	LARGE_INTEGER m_start;
	LARGE_INTEGER m_stop;
	LARGE_INTEGER m_frequency;
};


