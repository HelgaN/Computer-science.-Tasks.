#include<iostream>
#include< clocale>
using namespace std;

void main() {
	setlocale(LC_ALL, "RUS");
	double x1, y1, x2, y2, r;

	cout << "������� ���������� ������ ���������� O(xo,yo) � ������ R " << endl;
	cout << "������� x: ";
	cin >> x1;
	cout << "������� y: ";
	cin >> y1;
	cout << "������� ������ R ";
	cin >> r;
	cout << "������� ���������� ������������ ����� " << endl;
	cout << "������� x: ";
	cin >> x2;
	cout << "������� y: ";
	cin >> y2;

	if (pow((x2 - x1), 2) + pow((y2 - y1), 2) <= pow(r, 2)) {
		cout << "������ ����� �������� � ���������. ";
	}
	else {
		cout << "������ ����� �� �������� � ���������. ";
	}
	system("pause");
}