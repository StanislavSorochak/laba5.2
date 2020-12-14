// Lab_05_2.cpp
// < Сорочак Станіслав >
// Лабораторна робота № 5.2
// Варіант 24

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double S(const double x, const double eps, int& n, double& s);
double A(const double x, const int n, double& a);

int main()
{
	double xp, xk, x, dx, eps, a = 0, R = 0, s = 0;
	int n = 0;

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "eps = "; cin >> eps;

	cout << fixed;
	cout << "-------------------------------------------------" << endl;
	cout << "|" << setw(7) << "x" << " |"
		<< setw(10) << "log(x+1)" << " |"
		<< setw(10) << "S" << " |"
		<< setw(5) << "n" << " |"
		<< endl;
	cout << "-------------------------------------------------" << endl;

	x = xp;
	while (x <= xk)
	{
		S(x, eps, n, s);

		cout << "|" << setw(7) << setprecision(2) << x << " |"
			<< setw(10) << setprecision(5) << log(x+1) << " |"
			<< setw(10) << setprecision(5) << s << " |"
			<< setw(5) << n << " |"
			<< endl;
		x += dx;
	}
	cout << "-------------------------------------------------" << endl;

	return 0;
}

double S(const double x, const double eps, int& n, double& s)
{
	n = 0;
	double a = x;
	s = a;
	do {
		n++;
		A(x, n, a);
		s += a;
	} while (abs(a) >= eps);
	return s;
}

double A(const double x, const int n, double& a)
{
	double R = (pow(-1.0, n) * pow(x, n + 1.0)) / (n + 1);
	a *= R;
	return a;
}




