#include<iostream>
using namespace std;
#include< clocale>;


void main() {
	setlocale(LC_ALL, "RUS");
	int a, b, c, A, B, C;

	cout << "Введите три целых числа \n";
	cout << "Первое число: ";
	cin >> a;
	cout << "Второе число: ";
	cin >> b;
	cout << "Третье число: ";
	cin >> c;


	A = a + b + c;
	B = a * b * c;
	C = (a + b + c) / 3;

	cout << "Сумма чисел равна " << A << endl;
	cout << "Произведение чисел равно " << B << endl;
	cout << "Среднее значение равно " << C << endl;

	system("pause");
}