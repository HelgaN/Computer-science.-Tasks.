#include<iostream>
using namespace std;
#include< clocale>;


void main() {
	setlocale(LC_ALL, "RUS");

	double X, A, Y, B, choc, iris;

	cout << "X ��������� ���������� ������ ����� � ������ \n"  << "������� ���������� ���������� ������ � ��" << endl;
	cin >> X;
	cout << "������� ��������� �������������� ���������� ���������� ������" << endl;
	cin >> A;
	choc = A / X;

	cout << "Y ��������� ������ ����� B ������ \n"  << "������� ���������� ������ � ��" << endl;
	cin >> Y;
	cout << "������� ��������� �������������� ���������� ������" << endl;
	cin >> B;
	iris = B / Y;

	cout << "���� ��������� ���������� ������  ����� " << choc << endl;
	cout << "���� ��������� ������ ����� " << iris << endl;
	cout << "���������� ������� ������ ������ � " << choc / iris << "���(�)" << endl;

	system("pause");
}