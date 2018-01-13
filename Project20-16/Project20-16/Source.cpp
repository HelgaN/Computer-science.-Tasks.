#include<iostream>
#include< clocale>
using namespace std;

void main() {
	setlocale(LC_ALL, "RUS");
	int a, b;
		
	cout << "¬ведите два целых числа: N Ц достоинство (от 6 до 14) и M Ц масть карты (от 1 до 4) " << endl;
	cout << "¬ведите N " << endl;
	cin >> a;
	cout << "¬ведите M " << endl;
	cin >> b;

	switch (a) {
	case 6:
		cout << "шесть ";
		break;

	case 7:
		cout << "семь ";
		break;

	case 8:
		cout << "восемь ";
		break;

	case 9:
		cout << "дев€ть ";
		break;

	case 10:
		cout << "дес€ть";
		break;

	case 11:
		cout << "валет ";
		break;

	case 12:
		cout << "дама ";
		break;

	case 13:
		cout << "король ";
		break;

	case 14:
		cout << "туз ";
		break;

	default:
		cout << "¬ведено некорректное значение! ";
		break;

	}

	switch (b) {
	case 1:
		cout << "пики ";
		system("pause");
		break;

	case 2:
		cout << "трефы ";
		system("pause");
		break;

	case 3:
		cout << "бубны ";
		system("pause");
		break;

	case 4:
		cout << "черви ";
		system("pause");
		break;
	
	default:
		cout << "¬ведено некорректное значение! ";
		system("pause");
		break;

	}
}