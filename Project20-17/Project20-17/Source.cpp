#include<iostream>
#include< clocale>
using namespace std;

void main() {
	setlocale(LC_ALL, "RUS");

	int a, b, c;
	
	cout << "������� ����������� ����� ";
	cin >> a;
		
	switch (a / 100) {
	case 1:     cout << "��� ";
		break;
	case 2:     cout << "������ ";
		break;
	case 3:  cout << "������ ";
		break;
	case 4:     cout << "��������� ";
		break;
	case 5:     cout << "������� ";
		break;
	case 6:  cout << "�������� ";
		break;
	case 7:     cout << "������� ";
		break;
	case 8:     cout << "��������� ";
		break;
	case 9:  cout << "��������� ";
		break;
	}

	switch (a * 10) {
	case 1100:     cout << "������ ";
		system("pause");
		break;
	}

	switch (a % 100) {
	case 11:     cout << "����������� ";
		system("pause");
		break;
	case 12:     cout << "���������� ";
		system("pause");
		break;
	case 13:  cout << "���������� ";
		system("pause");
		break;
	case 14:     cout << "������������ ";
		system("pause");
		break;
	case 15:     cout << "���������� ";
		system("pause");
		break;
	case 16:  cout << "����������� ";
		system("pause");
		break;
	case 17:     cout << "����������� ";
		system("pause");
		break;
	case 18:     cout << "������������ ";
		system("pause");
		break;
	case 19:  cout << "������������ ";
		system("pause");
		break;
	}


	switch ((a / 10) % 10 ) {
	case 1:     cout << " ";
		break;
	case 2:  cout << "�������� ";
		break;
	case 3:     cout << "�������� ";
		break;
	case 4:     cout << "����� ";
		break;
	case 5:  cout << "��������� ";
		break;
	case 6:     cout << "���������� ";
		break;
	case 7:     cout << "��������� ";
		break;
	case 8:  cout << "����������� ";
		break;
	case 9:     cout << "��������� ";
		break;
		}

	switch (a % 10) {
	case 0:     cout << " ";
		system("pause");
		break;
	case 1:     cout << "���� ";
		system("pause");
		break;
	case 2:     cout << "��� ";
		system("pause");
		break;
	case 3:  cout << "��� ";
		system("pause");
		break;
	case 4:     cout << "������ ";
		system("pause");
		break;
	case 5:     cout << "���� ";
		system("pause");
		break;
	case 6:  cout << "����� ";
		system("pause");
		break;
	case 7:     cout << "���� ";
		system("pause");
		break;
	case 8:     cout << "������ ";
		system("pause");
		break;
	case 9:  cout << "������ ";
		system("pause");
		break;
	}
}