#include<iostream>
#include< clocale>
using namespace std;

void main() {
	setlocale(LC_ALL, "RUS");

	const int N = 7;
	int array[N], sum = 0;
	for (int i = 0; i < 7; i++)
	{
		cout << "������� [" << i << "] ������� ������� ";
		cin >> array[i];
		sum += array[i];
	}

	cout << "����� ��������� ������� ����� " << sum;

	system("pause");
}

