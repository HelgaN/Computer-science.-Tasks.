#include<iostream>
#include< clocale>
using namespace std;

void main() {
	setlocale(LC_ALL, "RUS");
	int x, divider = 0;
	cout << "������� ����� �����  ";
	cin >> x;

	for (int i = 1; i < x - 1; i++) {
		if (x % i == 0) {
			divider += i;
		}
	}
	if (x == divider) {
		cout << "������ ����� �������� ����������� " << endl;
	}
	else {
		cout << "������ ����� �� �������� ����������� " << endl;
	}

	system("pause");
}