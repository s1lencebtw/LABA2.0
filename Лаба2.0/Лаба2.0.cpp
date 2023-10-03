//	Lab2.1.cpp
// <Летнянчин Віталій>
// Лабораторна робота № 2.1
// Лінійні програми.
// Варіант 13
#include <iostream>
#include <cmath>
using namespace std;;
int main()
{
	double a;
	double b;
	double z1;
	double z2;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	z1 = (sin(a) + cos(b*2-a)) / (cos(a) - sin(b * 2 - a));
	z2 = (1 + sin(b * 2)) / cos(b * 2);
	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
};