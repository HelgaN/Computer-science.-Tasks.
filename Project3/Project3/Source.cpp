#include<iostream>
using namespace std;
#include< clocale>;


void main() {
	setlocale(LC_ALL, "RUS");
	double a, b, c, G, P;

	cout << "������� ������ �������������� ������������ " << endl;
	cout << "����� ������ ������� ����� ";
	cin >> a;
	cout << "����� ������ ������� ����� ";
	cin >> b;

	c = sqrt(a*a + b*b);

	P = a + b + c;

	cout << "���������� ����� " <<  c << endl;
	cout << "�������� ����� " <<  P << endl;

	system("pause");
}
