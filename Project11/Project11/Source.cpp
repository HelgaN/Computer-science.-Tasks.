#include<iostream>
using namespace std;
#include< clocale>;


void main() {
	setlocale(LC_ALL, "RUS");
	int grX, gr360;
	double p, rad;

	cout << "¬ведите значение угла в градусах (0, 360^0): ";
	cin >> grX;

	p = 3.1415927;
	gr360 = 2 * p;
	rad = (grX * 2 * p) / 360;


	cout << "«начение этого же угла в радианах составл€ет " << rad << endl;

	system("pause");
}