#include<iostream>
#include< clocale>
using namespace std;

void main() {
	setlocale(LC_ALL, "RUS");
	int x, x10m = 0, x5 = 0, x25 = 0, x100 = 0;
	cout << "������� �����  ";
	cin >> x;

	while (x != 0) {
		switch (x)
		{
		case -10: x10m++;
			break;
		case 5: x5++;
			break;
		case 25: x25++;
			break; 
		case 100: x100++;
			break;
		default:
			break;
		}

		cout << "������� �����  ";
		cin >> x;
	}

	cout << "-10 ��������� " << x10m << "���(�)" << endl;
	cout << "5 ��������� " << x5 << "���(�)" << endl;
	cout << "25 ��������� " << x25 << "���(�)" << endl;
	cout << "100 ��������� " << x100 << "���(�)" << endl;
	system("pause");
}