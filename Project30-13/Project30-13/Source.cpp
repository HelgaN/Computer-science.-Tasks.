#include<iostream>
#include< clocale>
using namespace std;

void main() {
	setlocale(LC_ALL, "RUS");
	int x, y = 0, sum = 0, pr = 1;
	cout << "Введите целое число  ";
	cin >> x;

		while (x > 0) {
			y = x % 10;
			x = x / 10;
			
			sum = sum + y;
			pr = pr * y;
	}

	cout << "Сумма равна " << sum << endl;
	cout << "Произведение равно " << pr << endl;
	system("pause");
}