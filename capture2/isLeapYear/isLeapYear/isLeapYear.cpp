// isLeapYear.cpp : 定义控制台应用程序的入口点。
// 判断是否为闰年

#include "stdafx.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int year;
	int isLeapYear;

	cout << "Enter a year：";
	cin >> year;

	isLeapYear = (year % 4 == 0) && (year % 100 == 0) && (year % 400 == 0);

	if (isLeapYear)
		cout << year << " is Leap Year" << endl;
	else
		cout << year << " is not a Leap Year" << endl;

	getchar();
	getchar();
	return 0;
}

