#include<iostream>
using namespace std;
#include< clocale>;


void main() {
	setlocale(LC_ALL, "RUS");
	double p, L, R, S;
	p = 3.1415927;

	cout << "������� ����� L ���������� " << endl;
	cin >> L;

	R = L / (2 * p);
	S = p * R * R;

	cout << "������ ����� " << R << endl;
	cout << "������� ����� " << S << endl;

	system("pause");
}
