#include<iostream>
#include< clocale>
using namespace std;

int equation(int a, int b, int c);
int discriminant(int a, int b, int c);
int rootEquations(int a, int b, int c);

void main() {
	setlocale(LC_ALL, "RUS");

	int x1, x2, x3, D;
	
	cout << "������� ����������� ��������� ax^2 + bx + c = 0 " << endl;
	cout << "������� a ";
	cin >> x1;
	cout << "������� b ";
	cin >> x2;
	cout << "������� c ";
	cin >> x3;
	
	equation(x1, x2, x3);
	D = discriminant(x1, x2, x3);
	rootEquations(D, x1, x2);
	

	system("pause");
}

int equation(int a, int b, int c) {
	cout << a << "x^2" << "+" << b << "x" << "+" << c << "=" << "0" << endl;
	return 0;
}

int discriminant(int a, int b, int c) {
	int d = pow(b, 2) - 4 * a*c;
	cout << "������������ ����� " << d << endl;
	return d;
}

int rootEquations(int a, int b, int c) {
	if (a > 0) {
		int root1 = ((-c + sqrt(a)) / (2 * b));
		int root2 = ((-c - sqrt(a)) / (2 * b));
		cout << "����� ��������� ����� " << root1 << " � " << root2 << endl;
		return root1, root2;
	}
	else if (a < 0) {
		cout << "��������� �� ����� ������ " << endl;
		return 0;
	} 
	else if (a == 0) {
		int root3 = (-c) / (2 * b);
		cout << "������ ��������� ����� " << root3;
		return root3;
	}
}
