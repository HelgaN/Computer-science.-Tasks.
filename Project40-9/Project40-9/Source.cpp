#include<iostream>
#include< clocale>
using namespace std;

int reverseNumber(int x);

void main() {
	setlocale(LC_ALL, "RUS");

	int n;

	cout << "¬ведите целое число ";
	cin >> n;

	reverseNumber(n);

	system("pause");
}

int reverseNumber(int x) {
	int rev;
	while (x != 0) {
		rev = x % 10;
		cout << rev;
		x = x / 10;
	}
	return rev;
}