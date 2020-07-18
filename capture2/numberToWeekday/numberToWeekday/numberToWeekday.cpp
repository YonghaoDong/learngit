// numberToWeekday.cpp : 定义控制台应用程序的入口点。
//数字转星期

#include "stdafx.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	while (1)
	{
		int num;
		int weekday;

		cout << "input a num:";
		cin >> num;

		switch (num)
		{
		case 1:
			cout << "Monday" << endl;
			break;
		case 2:
			cout << "Tuesday" << endl;
			break;
		case 3:
			cout << "Wednesday" << endl;
			break;
		case 4:
			cout << "Thursday" << endl;
			break;
		case 5:
			cout << "Friday" << endl;
			break;
		case 6:
			cout << "Saturday" << endl;
			break;
		case 7:
			cout << "Sunday" << endl;
			break;
		default:
			cout << "The num is wrong" << endl;
			break;
		}
	}
}

