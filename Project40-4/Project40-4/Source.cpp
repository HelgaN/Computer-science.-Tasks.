#include<iostream>
#include< clocale>
using namespace std;

int factOfX(int a);

void main() {
	setlocale(LC_ALL, "RUS");

	int x1, x2, x3, fact1, fact2, fact3;
	cout << "¬ведите три неотрицательных числа " << endl;
	cout << "¬ведите первое число ";
	cin >> x1;
	cout << "¬ведите второе число ";
	cin >> x2;
	cout << "¬ведите третье число ";
	cin >> x3;

	if (x1 >= 0 && x2 >= 0 && x3 >= 0) {
		fact1 = factOfX(x1);
		fact2 = factOfX(x2);
		fact3 = factOfX(x3);

		cout << "—умма факториалов введенных чисел равна " << fact1 + fact2 + fact3 << endl;
	}
	else {
		cout << "ќшибка! ќдно из чисел €вл€етс€ отрицательным! " << endl;
	}

	system("pause");
}

int factOfX(int a) {
	int f = 1;
	for (int i = 1; i <= a; ++i) {
		f *= i;
	}
	return f;
}