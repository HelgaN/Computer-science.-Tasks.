#include<iostream>
using namespace std;
#include< clocale>;


void main() {
	setlocale(LC_ALL, "RUS");
	int x;
	int a, b, c;

	cout << "������� ����������� ����� : ";
	cin >> x;

	a = x / 100;
	//cout << "First" << a << endl;

	b = (x % 100) / 10;
	//cout << "Second" << b << endl;

	c = x % 10;
	//cout << "Third" << c << endl;

	cout << "����� ���� ������� ����� ����� : " << a + b + c << endl;
	cout << "������������ ���� ������� ����� ����� : " << a * b * c << endl;
	cout << "������� �������� ���� ������� ����� ����� : " << (a + b + c) / 3 << endl;

	system("pause");
}