#include<iostream>
#include< clocale>
using namespace std;

void main() {
	setlocale(LC_ALL, "RUS");
	int a;

	cout << "������� ���������� ����� ������ � ���� (1 - 12): " << endl;

	cin >> a;

	if (a == 1 || a == 2 || a == 12) {
		cout << "����" << endl;
	}
	else {
		if (a == 3 || a == 4 || a == 5) {
			cout << "�����" << endl;
		}
		else {
			if (a == 6 || a == 7 || a == 8) {
				cout << "����" << endl;
			}
			else {
				if (a == 9 || a == 10 || a == 11) {
					cout << "�����" << endl;
				}
				else {
					cout << "������� �������� ��������! " << endl;
				}
			}
		}

	}

	system("pause");
}