#include<iostream>
#include< clocale>
using namespace std;

double numberToThePowerOfN(double num, double power);

void main() {
	setlocale(LC_ALL, "RUS");

	double n, p, res;
	cout << "¬ведите степень в которую вы хотите возвести число ";
	cin >> p;
	cout << "¬ведите число, которое вы хотите возвести в " << p << " степень ";
	cin >> n;
	res = numberToThePowerOfN(n, p);

	system("pause");
}

double numberToThePowerOfN(double num, double power) {
	double result = pow(num, power);
	cout << "„исло " << num << " в степени " << power << " равно " << result << endl;
	return result;
}