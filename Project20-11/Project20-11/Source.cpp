#include<iostream>
#include< clocale>
using namespace std;

void main() {
	setlocale(LC_ALL, "RUS");
	int x;

	cout << "¬ведите целое число " << endl;
	cin >> x;

	if ((!x % 2 == 0) && (x > 0)) {
		x += 1;
	}
	else {
		if (x < 0) {
			x -= 2;
		}
		else {
			if (x == 0) {
				x = 10;
			}
			else {
				x;
			}
		}
	}

	cout << x << endl;
	system("pause");
}