// qiuyinzi.cpp : 定义控制台应用程序的入口点。
//输入一个整数，求所有因子

#include "stdafx.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	while (1)
	{
		int num;

		cout << "input a num:";
		cin >> num;

		for (int i = 1; i <= num; i++)
		{
			if (num % i == 0)
				cout << i << endl;
		}

	}

	return 0;
}

