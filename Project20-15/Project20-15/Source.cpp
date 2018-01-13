#include<iostream>
#include< clocale>
using namespace std;

void main() {
	setlocale(LC_ALL, "RUS");
	double x1, y1, x2, y2, r;

	cout << "Введите координаты центра окружности O(xo,yo) и радиус R " << endl;
	cout << "Введите x: ";
	cin >> x1;
	cout << "Введите y: ";
	cin >> y1;
	cout << "Введите радиус R ";
	cin >> r;
	cout << "Введите координаты произвольной точки " << endl;
	cout << "Введите x: ";
	cin >> x2;
	cout << "Введите y: ";
	cin >> y2;

	if (pow((x2 - x1), 2) + pow((y2 - y1), 2) <= pow(r, 2)) {
		cout << "Данная точка попадает в окруность. ";
	}
	else {
		cout << "Данная точка не попадает в окруность. ";
	}
	system("pause");
}