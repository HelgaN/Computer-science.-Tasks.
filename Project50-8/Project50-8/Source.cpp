#include<iostream>
#include< clocale>
using namespace std;

void main() {
	setlocale(LC_ALL, "RUS");

	const int N = 100;
	int array[N], sumPositive = 0, countNegative = 0, proOdd = 1, i = 0, size;
	
	cout << "������� ������ ������� ";
	cin >> size;

	for (int j = 0; j < size; j++) 
	{
		cout << "������� [" << j << "] ������� ������� ";
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

		cout << "���������� ������������� ��������� �������: " << countNegative << endl;
		cout << "����� ������������� ��������� �������: " << sumPositive << endl;
		cout << "������������ ���������, ����������� ��� �������� ��������: " << proOdd << endl;
	
	system("pause");
}
