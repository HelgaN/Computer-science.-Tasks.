#include<iostream>
#include< clocale>
using namespace std;

void main() {
	setlocale(LC_ALL, "RUS");
	int a, b;
		
	cout << "������� ��� ����� �����: N � ����������� (�� 6 �� 14) � M � ����� ����� (�� 1 �� 4) " << endl;
	cout << "������� N " << endl;
	cin >> a;
	cout << "������� M " << endl;
	cin >> b;

	switch (a) {
	case 6:
		cout << "����� ";
		break;

	case 7:
		cout << "���� ";
		break;

	case 8:
		cout << "������ ";
		break;

	case 9:
		cout << "������ ";
		break;

	case 10:
		cout << "������";
		break;

	case 11:
		cout << "����� ";
		break;

	case 12:
		cout << "���� ";
		break;

	case 13:
		cout << "������ ";
		break;

	case 14:
		cout << "��� ";
		break;

	default:
		cout << "������� ������������ ��������! ";
		break;

	}

	switch (b) {
	case 1:
		cout << "���� ";
		system("pause");
		break;

	case 2:
		cout << "����� ";
		system("pause");
		break;

	case 3:
		cout << "����� ";
		system("pause");
		break;

	case 4:
		cout << "����� ";
		system("pause");
		break;
	
	default:
		cout << "������� ������������ ��������! ";
		system("pause");
		break;

	}
}