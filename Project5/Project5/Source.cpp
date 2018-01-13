#include<iostream>
using namespace std;
#include< clocale>;


void main() {
	setlocale(LC_ALL, "RUS");
	double p, S, D, L;
	p = 3.1415927;

	cout << "Введите площадь S окружности " << endl;
	cin >> S;

	D = sqrt(S / (2 * p)) + sqrt(S / (2 * p));
	L = 2 * p * sqrt(S / (2 * p));

	cout << "Диаметр D окружности равен " << D << endl;
	cout << "Длину L окружности равна " << L << endl;

	system("pause");
}
