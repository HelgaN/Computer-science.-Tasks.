#include<iostream>
using namespace std;
#include<clocale>;


void main() {
	setlocale(LC_ALL, "RUS");

	int x1, y1, x2, y2, x3, y3, P;
	double a, b, c, p, S;

	cout << "¬ведите координаты вершин треугольника: (x1, y1), (x2, y2), (x3, y3) \n" << "¬ведите x1: ";
	cin >> x1;
	cout << "¬ведите y1: ";
	cin >> y1;

	cout << "¬ведите x2: ";
	cin >> x2;
	cout << "¬ведите y2: ";
	cin >> y2;

	cout << "¬ведите x3: ";
	cin >> x3;
	cout << "¬ведите y3: ";
	cin >> y3;

	a = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
	b = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
	c = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));

	P = a + b + c;
	p = (a + b + c) / 2;
	S = sqrt(p * (p - a) * (p - b) * (p - c));

	cout << "ѕериметр треугольника равен " << P << endl;
	cout << "ѕлощадь треугольника равна " << S << endl;

	system("pause");
}