/*
Timer.h
=======

High Resolution Timer.
This timer is able to measure the elapsed time with 1 micro-second accuracy

AUTHOR: Song Ho Ahn (song.ahn@gmail.com)
Copyright (c) 2003 Song Ho Ahn
*/

#pragma once
#include <windows.h>

class Timer
{
	double startTimeInMicroSec;
	double endTimeInMicroSec;              
	int    stopped;

	LARGE_INTEGER frequency;                    
	LARGE_INTEGER startCount;                   
	LARGE_INTEGER endCount;
public:
	Timer();                                    
	~Timer();                                   

	void   start();                             
	void   stop();                              
	double getElapsedTime();                    
	double getElapsedTimeInSec();               
	double getElapsedTimeInMilliSec();          
	double getElapsedTimeInMicroSec();        
};
