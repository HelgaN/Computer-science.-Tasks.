#include<iostream>
#include< clocale>
using namespace std;

void main() {
	setlocale(LC_ALL, "RUS");
	int x, count = 0, pr = 1;
	cout << "������� �����  ";
	cin >> x;

	while (x != 0) {
		if ((x % 2 != 0) && (x < 0)) {
			count += 1;
		}

		if (x > 0) {
			pr *= x;
		}
		cout << "������� �����  ";
		cin >> x;
	}

	cout << "���������� ��������, ������������� ����� " << count << endl;
	cout << "������������ ���� ������������� ����� " << pr << endl;
	system("pause");
}