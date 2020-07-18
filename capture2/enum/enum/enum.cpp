// enum.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	enum Weekday { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };

	Weekday Mon = Monday;
	enum Weekday Tue = Tuesday;
	cout << Mon;
	cout << Tue;

	getchar();

	return 0;
}

