#include<iostream>
using namespace std;
#include< clocale>;


void main() {
	setlocale(LC_ALL, "RUS");
	int a, b, c, A, B, C;

	cout << "������� ��� ����� ����� \n";
	cout << "������ �����: ";
	cin >> a;
	cout << "������ �����: ";
	cin >> b;
	cout << "������ �����: ";
	cin >> c;


	A = a + b + c;
	B = a * b * c;
	C = (a + b + c) / 3;

	cout << "����� ����� ����� " << A << endl;
	cout << "������������ ����� ����� " << B << endl;
	cout << "������� �������� ����� " << C << endl;

	system("pause");
}