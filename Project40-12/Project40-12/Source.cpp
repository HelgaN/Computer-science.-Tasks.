#include<iostream>
#include< clocale>
using namespace std;

int Fibonacci(int);

void main() {
	setlocale(LC_ALL, "RUS");

	int n;  
	cout << "�������� ������ �������� ���� ��������� �� ������ ������? ";  
	cin >> n;
	cout << "�������� " << n << "-��� �������� ���� ��������� �����: " << Fibonacci(n) << endl;
	system("pause");

}

int Fibonacci(int n) {
	if (n == 1 || n == 0) { return n; }
	return Fibonacci(n - 1) + Fibonacci(n - 2);
}