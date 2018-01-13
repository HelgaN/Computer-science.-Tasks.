#include<iostream>
using namespace std;
#include< clocale>;


void main() {
	setlocale(LC_ALL, "RUS");
	int A, B, C, D;

	cout << "Введите значения в переменные A, B, C \n";
	cout << "Значение A: ";
	cin >> A;
	cout << "Значение B: ";
	cin >> B;
	cout << "Значение C: ";
	cin >> C;

	D = A;
	A = B;
	B = C;
	C = D;

	cout << "Новое значение A: " << A << endl;
	cout << "Новое значение B: " << B << endl;
	cout << "Новое значение C: " << C << endl;


	system("pause");
}