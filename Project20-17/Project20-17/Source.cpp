#include<iostream>
#include< clocale>
using namespace std;

void main() {
	setlocale(LC_ALL, "RUS");

	int a, b, c;
	
	cout << "Введите трехзначное число ";
	cin >> a;
		
	switch (a / 100) {
	case 1:     cout << "сто ";
		break;
	case 2:     cout << "двести ";
		break;
	case 3:  cout << "триста ";
		break;
	case 4:     cout << "четыреста ";
		break;
	case 5:     cout << "пятьсот ";
		break;
	case 6:  cout << "шестьсот ";
		break;
	case 7:     cout << "семьсот ";
		break;
	case 8:     cout << "восемьсот ";
		break;
	case 9:  cout << "девятьсот ";
		break;
	}

	switch (a * 10) {
	case 1100:     cout << "десять ";
		system("pause");
		break;
	}

	switch (a % 100) {
	case 11:     cout << "одиннадцать ";
		system("pause");
		break;
	case 12:     cout << "двенадцать ";
		system("pause");
		break;
	case 13:  cout << "тринадцать ";
		system("pause");
		break;
	case 14:     cout << "четырнадцать ";
		system("pause");
		break;
	case 15:     cout << "пятнадцать ";
		system("pause");
		break;
	case 16:  cout << "шестнадцать ";
		system("pause");
		break;
	case 17:     cout << "семьнадцать ";
		system("pause");
		break;
	case 18:     cout << "восемнадцать ";
		system("pause");
		break;
	case 19:  cout << "девятнадцать ";
		system("pause");
		break;
	}


	switch ((a / 10) % 10 ) {
	case 1:     cout << " ";
		break;
	case 2:  cout << "двадцать ";
		break;
	case 3:     cout << "тридцать ";
		break;
	case 4:     cout << "сорок ";
		break;
	case 5:  cout << "пятьдесят ";
		break;
	case 6:     cout << "шестьдесят ";
		break;
	case 7:     cout << "семьдесят ";
		break;
	case 8:  cout << "восемьдесят ";
		break;
	case 9:     cout << "девяносто ";
		break;
		}

	switch (a % 10) {
	case 0:     cout << " ";
		system("pause");
		break;
	case 1:     cout << "один ";
		system("pause");
		break;
	case 2:     cout << "два ";
		system("pause");
		break;
	case 3:  cout << "три ";
		system("pause");
		break;
	case 4:     cout << "четыре ";
		system("pause");
		break;
	case 5:     cout << "пять ";
		system("pause");
		break;
	case 6:  cout << "шесть ";
		system("pause");
		break;
	case 7:     cout << "семь ";
		system("pause");
		break;
	case 8:     cout << "восемь ";
		system("pause");
		break;
	case 9:  cout << "девять ";
		system("pause");
		break;
	}
}