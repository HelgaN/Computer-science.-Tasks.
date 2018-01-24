#include<iostream>
#include< clocale>
using namespace std;

int nod(int, int);

void main() {
	setlocale(LC_ALL, "RUS");

	int a, b;
	cout << "Нахождение наибольшего общего делителя двух чисел";
	cout << "\n Введите первое число ";
	cin >> a;
	cout << "\n Введите второе число ";
	cin >> b;

	cout << "Наибольший общий делитель введенных чисел равен " << nod(a, b) << endl;
	system("pause");
}

int nod(int x, int y) {
	if (y == 0) { return x; }
	return nod(y, x % y);
}