#include<iostream>
#include< clocale>
using namespace std;

void main() {
	setlocale(LC_ALL, "RUS");
	int a, b;

	cout << "¬ведите два целых числа A и B " << endl;
	cout << "¬ведите число A ";
	cin >> a;
	cout << "¬ведите число B ";
	cin >> b;

	if (a > b) {
		cout << a << " > " << b << endl;
	}
	else {
		cout << a << " < " << b << endl;
	}
	system("pause");
}