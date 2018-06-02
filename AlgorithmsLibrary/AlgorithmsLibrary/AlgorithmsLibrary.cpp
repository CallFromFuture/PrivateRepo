// AlgorithmsLibrary.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "StopWatch.h"

int main()
{
	AlgorithmsCore Core;
	CStopWatch timer1,timer2,timer3;
    int input1[18]={1,3,2,5,34,13,5,3,2,1,5,3,2,51,2,3,41,334};
	vector<int> input2 = { 1,3,2,5,34,13,5,3,2,1,5,3,2,51,2,3,41,334 };
	array<int,18> input3 = { 1,3,2,5,34,13,5,3,2,1,5,3,2,51,2,3,41,334 };
	//int output[18];
	timer1.start();
	Core.insertionSort(input1,sizeof(input1)/sizeof(int),true);
	timer1.stop();
	timer2.start();
	//vector<int> output2= Core.insertionSort(input2,  true);
	Core.insertionSort(input2, true);
	timer2.stop();
	timer3.start();
	Core.insertionSort(input3, true);
	timer3.stop();
	double time1 = timer1.getElapsedTime();
	double time2 = timer2.getElapsedTime();
	double time3 = timer3.getElapsedTime();
    cout << "time[array]:"<<time1*1000000000<< "ns\ntime[vector]:" << time2 * 1000000000 << "ns\ntime[array2]:" << time3 * 1000000000 <<"ns" << endl;
    return 0;
}

