#include<iostream>
using namespace std;
#include< clocale>;

void main() {
	setlocale(LC_ALL, "RUS");
	double p = 3.1415927, d, L;

	cout << "������� ������� ���������� ";
	cin >> d;

	L = p * d;

	cout << "����� ���������� ����� " <<  L << endl;

	system("pause");
}
