#include<iostream>
using namespace std;
#include< clocale>;


void main() {
	setlocale(LC_ALL, "RUS");
	int grX, gr360;
	double p, rad;

	cout << "������� �������� ���� � �������� (0, 360^0): ";
	cin >> grX;

	p = 3.1415927;
	gr360 = 2 * p;
	rad = (grX * 2 * p) / 360;


	cout << "�������� ����� �� ���� � �������� ���������� " << rad << endl;

	system("pause");
}