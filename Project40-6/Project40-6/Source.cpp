#include<iostream>
#include< clocale>
using namespace std;

double numberToThePowerOfN(double num, double power);

void main() {
	setlocale(LC_ALL, "RUS");

	double n, p, res;
	cout << "������� ������� � ������� �� ������ �������� ����� ";
	cin >> p;
	cout << "������� �����, ������� �� ������ �������� � " << p << " ������� ";
	cin >> n;
	res = numberToThePowerOfN(n, p);

	system("pause");
}

double numberToThePowerOfN(double num, double power) {
	double result = pow(num, power);
	cout << "����� " << num << " � ������� " << power << " ����� " << result << endl;
	return result;
}