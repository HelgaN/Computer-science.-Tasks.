#include<iostream>
#include< clocale>
using namespace std;

void enterNumbers(int* x, int* y);

void main() {
	setlocale(LC_ALL, "RUS");

	int a = 0, b = 0;
	
	enterNumbers(&a, &b);

	cout << a << endl;
	cout << b << endl;

	system("pause");
}

void enterNumbers(int* x, int* y) {
	cout << "¬ведите данные в первую переменную ";
	cin >> *x;
	cout << "¬ведите данные во вторую переменную ";
	cin >> *y;
}