#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a = 1;
	int b = 3;
	int c = -4;

	int disc = b * b - 4 * a * c;
	int firstSolution = (b * (-1) + sqrt(disc)) /(2 * a);
	int secondSolution = (b * (-1) - sqrt(disc))/ (2 * a);

	cout << firstSolution << " " << secondSolution << endl;
	return 0;
}