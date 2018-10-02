#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int inputNumber;
	cin >> inputNumber;

	cout << inputNumber % 10 << " " << inputNumber / 10 % 10 << " " << inputNumber / 100 % 10 << endl;
	cout << inputNumber % 10 + inputNumber / 10 % 10 + inputNumber / 100 % 10 << endl;
	return 0;
}
