// panduanzhengfugeshu.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int flag;
	int num;
	int positive=0, negative=0;
	for (flag = 0; flag == 0;){
		cout << "Please input a num: ";
		cin >> num;
		if (num == 0)
			flag = 1;
		else if (num > 0)
			positive++;
		else if (num < 0)
			negative++;
	}

	cout << "Positive: " << positive << endl;
	cout << "Negative: " << negative << endl;

	getchar();
	getchar();
	return 0;
}

