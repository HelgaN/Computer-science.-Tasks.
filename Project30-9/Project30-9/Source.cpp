#include<iostream>
#include< clocale>
using namespace std;

void main() {
	setlocale(LC_ALL, "RUS");
	int n, f = 1;
	cout << "������� ����� ��������������� �����  ";
	cin >> n;

	if (n >= 0) {
		for (int i = 1; i <= n; ++i) {
			f *= i;
		}
		cout << "�������� ����� ����� " << f << endl;
	}
	else {
		cout << "������! ������� ������������� �����! " << endl;
	}
	system("pause");
}

