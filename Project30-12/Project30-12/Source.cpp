#include<iostream>
#include< clocale>
using namespace std;

void main() {
	setlocale(LC_ALL, "RUS");
	int x, min, num;
	cout << "������� �����, ������� ������ ���������� ����������� �������� ����� ";
	cin >> x;

	cout << "������� ����� �����: ";
	cin >> min;

	for (int i = 1; i < x ; i++)
	{
		cout << "������� ����� �����: ";
		cin >> num;
		if (num < min)
		{
			min = num;
		}
	}

	cout << "���������� �� ����� ����� " << min << endl;
	system("pause");
}