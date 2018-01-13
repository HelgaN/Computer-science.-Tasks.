#include<iostream>
#include< clocale>
using namespace std;

void main() {
	setlocale(LC_ALL, "RUS");
	double a, b, c;

	cout << "¬ведите три числа ";
	cout << "\n ¬ведите первое число: ";
	cin >> a;

	cout << "\n ¬ведите второе число: ";
	cin >> b;

	cout << "\n ¬ведите третье число: ";
	cin >> c;

	if (a > b && b > c) {
		cout << a << "\t" << b << "\t" << c << "\t" << endl;
	}
	else
		if (a > c && c > b) {
			cout << a << "\t" << c << "\t" << b << "\t" << endl;
		}
		else 
			if (b > c && c > a) {
			cout << b << "\t" << c << "\t" << a << "\t" << endl;
		}
		else
			if (b > c && a > c) {
				cout << b << "\t" << a << "\t" << c << "\t" << endl;
			}
			else
				if (c > a && a > b) {
					cout << c << "\t" << a << "\t" << b << "\t" << endl;
				}
				else
					if (c > b && b > a) {
						cout << c << "\t" << b << "\t" << a << "\t" << endl;
					}

	system("pause");
}