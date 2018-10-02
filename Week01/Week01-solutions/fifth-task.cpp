#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int inputNumber;
	cin >> inputNumber;

	cout << (inputNumber % 5 == 0 && inputNumber % 2 == 0 && inputNumber % 3 == 0) << endl;
	return 0;
}