#include<iostream>
using namespace std;
#include< clocale>;


void main() {
	setlocale(LC_ALL, "RUS");
	double p, S, D, L;
	p = 3.1415927;

	cout << "������� ������� S ���������� " << endl;
	cin >> S;

	D = sqrt(S / (2 * p)) + sqrt(S / (2 * p));
	L = 2 * p * sqrt(S / (2 * p));

	cout << "������� D ���������� ����� " << D << endl;
	cout << "����� L ���������� ����� " << L << endl;

	system("pause");
}
