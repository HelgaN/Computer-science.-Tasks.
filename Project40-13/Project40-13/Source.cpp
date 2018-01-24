#include<iostream>
#include< clocale>
using namespace std;

int sumOfDigits(int);

void main() {
	setlocale(LC_ALL, "RUS");

	int n;
	cout << "¬ведите число, сумму цифр которого необходимо посчитать  ";
	cin >> n;
	cout << "—умма цифр числа " << n << " равна " << sumOfDigits(n) << endl;
	system("pause");
}

int sumOfDigits(int n) {
	if (n < 10) { return n; }
	return (n % 10) + sumOfDigits(n / 10);
}