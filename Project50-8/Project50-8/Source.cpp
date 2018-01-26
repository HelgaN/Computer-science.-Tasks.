#include<iostream>
#include< clocale>
using namespace std;

void main() {
	setlocale(LC_ALL, "RUS");

	const int N = 100;
	int array[N], sumPositive = 0, countNegative = 0, proOdd = 1, i = 0, size;
	
	cout << "Введите размер массива ";
	cin >> size;

	for (int j = 0; j < size; j++) 
	{
		cout << "Введите [" << j << "] элемент массива ";
		cin >> array[j];
		if (array[j] < 0) 
		{
			countNegative += 1;
		}

		if (array[j] > 0) 
		{
			sumPositive += array[j];
		}

		if (j % 2 != 0)
		{
			proOdd *= array[j];
		}
	}

		cout << "Количество отрицательных элементов массива: " << countNegative << endl;
		cout << "Сумма положительных элементов массива: " << sumPositive << endl;
		cout << "Произведение элементов, находящихся под нечетным индексом: " << proOdd << endl;
	
	system("pause");
}
