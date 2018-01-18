#include<iostream>
#include< clocale>
using namespace std;

void main() {
	setlocale(LC_ALL, "RUS");
	int n, f = 1;
	cout << "¬ведите целое неотрицательное число  ";
	cin >> n;

	if (n >= 0) {
		for (int i = 1; i <= n; ++i) {
			f *= i;
		}
		cout << "‘акторил числа равен " << f << endl;
	}
	else {
		cout << "ќшибка! ¬ведено отрицательное число! " << endl;
	}
	system("pause");
}

