#include<iostream>
#include< clocale>
using namespace std;

int factOfX(int a);

void main() {
	setlocale(LC_ALL, "RUS");

	int x1, x2, x3, fact1, fact2, fact3;
	cout << "������� ��� ��������������� ����� " << endl;
	cout << "������� ������ ����� ";
	cin >> x1;
	cout << "������� ������ ����� ";
	cin >> x2;
	cout << "������� ������ ����� ";
	cin >> x3;

	if (x1 >= 0 && x2 >= 0 && x3 >= 0) {
		fact1 = factOfX(x1);
		fact2 = factOfX(x2);
		fact3 = factOfX(x3);

		cout << "����� ����������� ��������� ����� ����� " << fact1 + fact2 + fact3 << endl;
	}
	else {
		cout << "������! ���� �� ����� �������� �������������! " << endl;
	}

	system("pause");
}

int factOfX(int a) {
	int f = 1;
	for (int i = 1; i <= a; ++i) {
		f *= i;
	}
	return f;
}