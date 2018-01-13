#include<iostream>
using namespace std;
#include< clocale>;


void main() {
	setlocale(LC_ALL, "RUS");
	double a, b, c, G, P;

	cout << "Введите катеты прямоугольного треугольника " << endl;
	cout << "Катет перврй стороны равен ";
	cin >> a;
	cout << "Катет второй стороны равен ";
	cin >> b;

	c = sqrt(a*a + b*b);

	P = a + b + c;

	cout << "Гипотенуза равна " <<  c << endl;
	cout << "Периметр равен " <<  P << endl;

	system("pause");
}
