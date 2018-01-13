#include<iostream>
using namespace std;
#include< clocale>;

void main() {
	setlocale(LC_ALL, "RUS");
	double p = 3.1415927, d, L;

	cout << "¬ведите диаметр окружности ";
	cin >> d;

	L = p * d;

	cout << "ƒлина окружности равна " <<  L << endl;

	system("pause");
}
