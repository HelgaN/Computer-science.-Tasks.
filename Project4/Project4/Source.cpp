#include<iostream>
using namespace std;
#include< clocale>;


void main() {
	setlocale(LC_ALL, "RUS");
	double p, L, R, S;
	p = 3.1415927;

	cout << "Введите длину L окружности " << endl;
	cin >> L;

	R = L / (2 * p);
	S = p * R * R;

	cout << "Радиус равен " << R << endl;
	cout << "Площадь равна " << S << endl;

	system("pause");
}
