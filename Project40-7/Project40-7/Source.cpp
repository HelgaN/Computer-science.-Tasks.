#include<iostream>
#include< clocale>
using namespace std;

double divisionOfNumbers(int x, int y);

void main() {
	setlocale(LC_ALL, "RUS");

	int a, b;
	double res;
	cout << "¬ведите делимое ";
	cin >> a;
	cout << "¬ведите делитель ";
	cin >> b;
	res = divisionOfNumbers(a, b);

	system("pause");
}

double divisionOfNumbers(int x, int y) {
	double result = (double)x / y;
	cout << x << " / " << y << " = " << result << endl;
	return result;
}