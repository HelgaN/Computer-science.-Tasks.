#include<iostream>
using namespace std;
#include< clocale>;
#include< cmath>;  // ???


void main() {
	setlocale(LC_ALL, "RUS");
	
	double p, z1, z2, z3, z4, rad;
	int grad;

	p = 3.1415927;
		
	cout << "Введите значение альфа в градусах ";
	cin >> grad;

	rad = (grad * p) / 180;

	z1 = 2 * pow(sin(3 * p - 2 * rad), 2) * pow(cos(5 * p + 2 * rad), 2);
	z2 = 1.0 / 4 - (1.0 / 4 * sin((5.0 / 2) * p - 8 * rad));
	z3 = pow(cos(3.0 / 8 * p - rad / 4), 2) - pow(cos(11.0 / 8 * p + rad / 4), 2);
	z4 = sqrt(2) / 2 * sin(rad / 2);

	cout << z1 << endl;
	cout << z2 << endl;
	cout << z3 << endl;
	cout << z4 << endl;

	system("pause");
}