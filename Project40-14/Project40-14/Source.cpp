#include<iostream>
#include< clocale>
using namespace std;

int nod(int, int);

void main() {
	setlocale(LC_ALL, "RUS");

	int a, b;
	cout << "���������� ����������� ������ �������� ���� �����";
	cout << "\n ������� ������ ����� ";
	cin >> a;
	cout << "\n ������� ������ ����� ";
	cin >> b;

	cout << "���������� ����� �������� ��������� ����� ����� " << nod(a, b) << endl;
	system("pause");
}

int nod(int x, int y) {
	if (y == 0) { return x; }
	return nod(y, x % y);
}