#include<iostream>
#include< clocale>
using namespace std;

void main() {
	setlocale(LC_ALL, "RUS");
	double a, n;
	cout << "������� ����� ";
	cin >> a;
	cout << "������� �������, � ������� ���������� �������� ������ ����� ";
	cin >> n;
	cout << "��������� ����� " << pow(a, n) << endl;
	
	system("pause");
}