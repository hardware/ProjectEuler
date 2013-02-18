#pragma once

#include <map>
#include <string>
#include <iostream>
#include <vector>
#include <math.h>
#include <stdio.h>
#include "Functions.h"
#include "Timer.h"

using namespace std;

class Problems
{
	Timer timer;
	map<int, string> problemList;

public:
	Problems(void);

	void solve(short id);
	void list();

	int problem1();
	unsigned problem2();
	long long problem3();
	unsigned problem4();
	unsigned problem5();
	unsigned problem6();
	int problem7();
	int problem8();
	int problem9();
	__int64 problem10();
	int problem11();
	int problem12();
	__int64 problem13();
};

