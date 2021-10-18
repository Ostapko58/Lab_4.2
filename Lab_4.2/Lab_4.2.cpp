// Lab_4.2.cpp
// < Онишківа Остапа >
// Лабораторна робота No 4.2
// Табуляція функції, заданої формулою: функція однієї змінної
// Варіант 5

#include<iostream>
#include<cmath>
#include <iomanip>
using namespace std;

int main()
{
	double x, xp, xk, dx, A, B, y;

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(7) << "x" << " |"
		<< setw(10) << "y" << " |" << endl;
	cout << "---------------------------" << endl;

	x = xp;

	while (x<=xk)
	{
		A = 1 / abs(x + 2) + 1;
		
		if (x < 1)
		{
			B = 7 * x * x + x - 8;
		}
		else
			if (x > 4)
			{
				B = sqrt(1 + abs(pow(cos(x), 3)));
			}
			else
			{
				B = cos((x + 4) / sqrt(11)) / sin((x + 4) / sqrt(11)) + 3;
			}

		y = A - B;
		
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		
		x +=dx;
	}
	
	cout << "---------------------------" << endl;

	return 0;
}