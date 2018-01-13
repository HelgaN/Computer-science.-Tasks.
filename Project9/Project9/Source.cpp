#include<iostream>
using namespace std;
#include< clocale>;


void main() {
	setlocale(LC_ALL, "RUS");
	int x;
	int a, b, c;

	cout << "Введите трехзначное число : ";
	cin >> x;

	a = x / 100;
	//cout << "First" << a << endl;

	b = (x % 100) / 10;
	//cout << "Second" << b << endl;

	c = x % 10;
	//cout << "Third" << c << endl;

	cout << "Сумма цифр данного числа равна : " << a + b + c << endl;
	cout << "Произведение цифр данного числа равно : " << a * b * c << endl;
	cout << "Среднее значение цифр данного числа равно : " << (a + b + c) / 3 << endl;

	system("pause");
}