#include<iostream>
#include< clocale>
using namespace std;

void main() {
	setlocale(LC_ALL, "RUS");
	int x, min, num;
	cout << "Введите число, которое задает количество последующих вводимых чисел ";
	cin >> x;

	cout << "Введите любое число: ";
	cin >> min;

	for (int i = 1; i < x ; i++)
	{
		cout << "Введите любое число: ";
		cin >> num;
		if (num < min)
		{
			min = num;
		}
	}

	cout << "Наименьшее из чисел равно " << min << endl;
	system("pause");
}