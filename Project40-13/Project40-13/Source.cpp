#include<iostream>
#include< clocale>
using namespace std;

int sumOfDigits(int);

void main() {
	setlocale(LC_ALL, "RUS");

	int n;
	cout << "������� �����, ����� ���� �������� ���������� ���������  ";
	cin >> n;
	cout << "����� ���� ����� " << n << " ����� " << sumOfDigits(n) << endl;
	system("pause");
}

int sumOfDigits(int n) {
	if (n < 10) { return n; }
	return (n % 10) + sumOfDigits(n / 10);
}