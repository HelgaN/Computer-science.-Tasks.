#include<iostream>
#include< clocale>
using namespace std;

int Fibonacci(int);

void main() {
	setlocale(LC_ALL, "RUS");

	int n;  
	cout << "Значение какого элемента ряда Фибоначчи вы хотите узнать? ";  
	cin >> n;
	cout << "Значение " << n << "-ого элемента ряда Фибоначчи равно: " << Fibonacci(n) << endl;
	system("pause");

}

int Fibonacci(int n) {
	if (n == 1 || n == 0) { return n; }
	return Fibonacci(n - 1) + Fibonacci(n - 2);
}