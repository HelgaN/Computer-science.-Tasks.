#include<iostream>
#include< clocale>
using namespace std;

void newNumbers(int* x, int* y, int* z);

void main() {
	setlocale(LC_ALL, "RUS");

	int a, b, c;

	cout << "������� �������� A: ";
	cin >> a;
	cout << "������� �������� B: ";
	cin >> b;
	cout << "������� �������� C: ";
	cin >> c;

	newNumbers(&a, &b, &c);

	cout << "����� ��������: \n" << " A = " << a << "\n B = " << b << "\n C = " << c << endl;

	system("pause");
}

void newNumbers(int* x, int* y, int* z) {
	int a = *x, b = *y, c = *z;
	*x = a + b + c - a * a;
	*y = pow(a, 2) + pow(b, 2) - pow(c, 2);
	*z = a * b * c;
}