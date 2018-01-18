#include<iostream>
#include< clocale>
using namespace std;

void main() {
	setlocale(LC_ALL, "RUS");
	int x, count = 0, pr = 1;
	cout << "Введите число  ";
	cin >> x;

	while (x != 0) {
		if ((x % 2 != 0) && (x < 0)) {
			count += 1;
		}

		if (x > 0) {
			pr *= x;
		}
		cout << "Введите число  ";
		cin >> x;
	}

	cout << "количество нечетных, отрицательных чисел " << count << endl;
	cout << "произведение всех положительных чисел " << pr << endl;
	system("pause");
}