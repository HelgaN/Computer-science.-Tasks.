#include<iostream>
#include< clocale>
using namespace std;

void main() {
	setlocale(LC_ALL, "RUS");
	int a, b;

	cout << "������� ��� ����� ����� A � B " << endl;
	cout << "������� ����� A ";
	cin >> a;
	cout << "������� ����� B ";
	cin >> b;

	if (a > b) {
		cout << a << " > " << b << endl;
	}
	else {
		cout << a << " < " << b << endl;
	}
	system("pause");
}