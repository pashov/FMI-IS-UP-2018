#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int inputNumber;
	cin >> inputNumber;

	int inputNumber2;
	cin >> inputNumber2;

	int save = inputNumber2;
	inputNumber2 = inputNumber;
	inputNumber = save;

	return 0;
}