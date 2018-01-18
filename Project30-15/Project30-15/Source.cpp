#include<iostream>
#include< clocale>
using namespace std;

void main() {
	setlocale(LC_ALL, "RUS");

	int divider = 0;

	for (int x = 2; x <= 10000; x++) {
		divider = 0;
		for (int i = 1; i <= x/2; i++) {
			if (x % i == 0) {
				divider += i;
			}
	}
		if (x == divider) {
			cout << x << "\t" << endl;
		}
	}
	system("pause");
}

