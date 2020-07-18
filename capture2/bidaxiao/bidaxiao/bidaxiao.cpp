// bidaxiao.cpp : 定义控制台应用程序的入口点。
//比较两数大小

#include "stdafx.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	while (1){
		int x, y;
		cout << "input x y:";
		cin >> x >> y;

		if (x > y)
			cout << x << " is larger" << endl;
		else if (x == y)
			cout << x << " and " << y << " is equal" << endl;
		else if (x < y)
			cout << y << " is larger" << endl;
	};
	return 0;
}

