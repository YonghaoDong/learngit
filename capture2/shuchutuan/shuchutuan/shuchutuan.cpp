// shuchutuan.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int N = 4;
	for (int i = 1; i <= 4; i++){
		for (int j = 1; j <= 30; j++)
			cout << " ";
		for (int j = 1; j <= 8 - 2 * i; j++)
			cout << " ";
		for (int j = 1; j <= 2 * i - 1; j++)
			cout << "*";
		cout << endl;
	}

	int M = 3;
	for (int i = 1; i <= 3; i++){
		for (int j = 1; j <= 30; j++)
			cout << " ";
		for (int j = 1; j <= 7 - 2 * i; j++)
			cout << "*";
		for (int j = 1; j <= 2 * i; j++)
			cout << " ";
		cout << endl;
	}
	
	getchar();


	return 0;
}

