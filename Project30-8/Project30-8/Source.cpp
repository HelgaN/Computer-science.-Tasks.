#include<iostream>
#include< clocale>
using namespace std;

void main() {
	setlocale(LC_ALL, "RUS");
	double a, n;
	cout << "¬ведите число ";
	cin >> a;
	cout << "¬ведите степень, в которую необходимо возвести данное число ";
	cin >> n;
	cout << "–езультат равен " << pow(a, n) << endl;
	
	system("pause");
}