#include<iostream>
#include< clocale>
using namespace std;

void main() {
	setlocale(LC_ALL, "RUS");

	const int N = 7;
	int array[N], sum = 0;
	for (int i = 0; i < 7; i++)
	{
		cout << "¬ведите [" << i << "] элемент массива ";
		cin >> array[i];
		sum += array[i];
	}

	cout << "—умма элементов массива равна " << sum;

	system("pause");
}

