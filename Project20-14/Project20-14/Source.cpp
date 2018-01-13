#include<iostream>
#include< clocale>
using namespace std;

void main() {
	setlocale(LC_ALL, "RUS");
	int a;

	cout << "Введите порядковый номер месяца в году (1 - 12): " << endl;

	cin >> a;

	if (a == 1 || a == 2 || a == 12) {
		cout << "Зима" << endl;
	}
	else {
		if (a == 3 || a == 4 || a == 5) {
			cout << "Весна" << endl;
		}
		else {
			if (a == 6 || a == 7 || a == 8) {
				cout << "Лето" << endl;
			}
			else {
				if (a == 9 || a == 10 || a == 11) {
					cout << "Осень" << endl;
				}
				else {
					cout << "Введено неверное значение! " << endl;
				}
			}
		}

	}

	system("pause");
}