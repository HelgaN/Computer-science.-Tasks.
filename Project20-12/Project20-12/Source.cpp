#include<iostream>
#include< clocale>
using namespace std;

void main() {
	setlocale(LC_ALL, "RUS");
	int a, b, c;

	cout << "������� ��� ����� ����� ";
	cout << "\n ������� ������ �����: ";
		cin >> a;

		cout << "\n ������� ������ �����: ";
		cin >> b;


		cout << "\n ������� ������ �����: ";
		cin >> c;

	if (a > b && a > c) {
		cout << "���������� ����� " << a << endl;
	}
	else {
		if (b > a && b > c) {
			cout << "���������� ����� " << b << endl;
		}
		else {
			cout << "���������� ����� " << c << endl;
		}
	}

	if (a < b && a < c) {
		cout << "���������� ����� " << a << endl;
	}
	else {
		if (b < a && b < c) {
			cout << "���������� ����� " << b << endl;
		}
		else {
			cout << "���������� ����� " << c << endl;
		}
	}

	cout << "����� ��������� ����� ����� " << a + b + c << endl;
	cout << "������������ ��������� ����� ����� " << a * b * c << endl;
	cout << "������� �������� ��������� ����� ����� " << (a + b + c) / 3 << endl;

	system("pause");
}