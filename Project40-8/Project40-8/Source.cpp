#include<iostream>
#include< clocale>
using namespace std;

int searchForThePerfectNumber(int x);

void main() {
	setlocale(LC_ALL, "RUS");

	int n, d = 0;;
	
	cout << "������� ����� ����� ";
	cin >> n;
	
	searchForThePerfectNumber(n);

	cout << "\n \n ����������� ����� �� " << 1 << " �� " << 1000 << ": " << endl;
	for (int x = 1; x <= 1000; x++) {
		d = 0;
		for (int i = 1; i <= x / 2; i++) {
			if (x % i == 0) {
				d += i;
			}
		}
		if (x == d) {
			cout << "����������� ����� " << x << "\n �����������: " << endl;
			for (int j = 1; j <= x / 2; j++) {
				if (x % j == 0) {
					cout << j << "\n";
				}
			}
		}
	}

	system("pause");
}

int searchForThePerfectNumber(int x) {
	int divider = 0;
	for (int i = 1; i < x - 1; i++) {
		if (x % i == 0) {
			divider += i;
		}
	}
	if (x == divider) {
		cout << "������ ����� �������� ����������� " << endl;
	}
	else {
		cout << "������ ����� �� �������� ����������� " << endl;
	}

	return 0;
}