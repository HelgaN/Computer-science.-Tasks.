#include<iostream>
using namespace std;
#include< clocale>;


void main() {
	setlocale(LC_ALL, "RUS");
	int A, B, C, D;

	cout << "������� �������� � ���������� A, B, C \n";
	cout << "�������� A: ";
	cin >> A;
	cout << "�������� B: ";
	cin >> B;
	cout << "�������� C: ";
	cin >> C;

	D = A;
	A = B;
	B = C;
	C = D;

	cout << "����� �������� A: " << A << endl;
	cout << "����� �������� B: " << B << endl;
	cout << "����� �������� C: " << C << endl;


	system("pause");
}