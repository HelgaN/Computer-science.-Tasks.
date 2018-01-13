#include<iostream>
#include< clocale>
using namespace std;

void main() {
	setlocale(LC_ALL, "RUS");
	int a, b, c;

	cout << "Введите три целых числа ";
	cout << "\n Введите первое число: ";
		cin >> a;

		cout << "\n Введите второе число: ";
		cin >> b;


		cout << "\n Введите третье число: ";
		cin >> c;

	if (a > b && a > c) {
		cout << "Наибольшее число " << a << endl;
	}
	else {
		if (b > a && b > c) {
			cout << "Наибольшее число " << b << endl;
		}
		else {
			cout << "Наибольшее число " << c << endl;
		}
	}

	if (a < b && a < c) {
		cout << "Наименьшее число " << a << endl;
	}
	else {
		if (b < a && b < c) {
			cout << "Наименьшее число " << b << endl;
		}
		else {
			cout << "Наименьшее число " << c << endl;
		}
	}

	cout << "Сумма введенных чисел равна " << a + b + c << endl;
	cout << "Произведение введенных чисел равно " << a * b * c << endl;
	cout << "Среднее значение введенных чисел равно " << (a + b + c) / 3 << endl;

	system("pause");
}