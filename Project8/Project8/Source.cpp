#include<iostream>
using namespace std;
#include< clocale>;


void main() {
	setlocale(LC_ALL, "RUS");
	double x, y, a, b;

	cout << "������� �������� X: ";
	cin >> x;

	a = 3 * pow(x, 6);
	b = 6 * pow(x, 2);
	y = a - b - 7;

	cout << "�������� ������� y = 3x^6- 6x^2 - 7 ��� ��������� �������� X ����� " << y << endl;

	system("pause");
}