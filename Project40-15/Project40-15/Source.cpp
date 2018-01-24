#include<iostream>
#include<clocale>
#include<cstdlib>
#include<ctime>
using namespace std;

int guessNumber(int, int, int, int);

void main() {
	setlocale(LC_ALL, "RUS");

	int x, n, a = 7, b = 57;
	srand(time(NULL));
	x = a + rand() % (b - a + 1);
	cout << "Угадайте число в интервале [7, 57] ";
	cin >> n;
	if (n >= a && n <= b) {
		guessNumber(a, b, n, x);
	}
	else {
		cout << "Введенное число не попадает в интервал! :(" << endl;
	}
	
	system("pause");
}

int guessNumber(int int1, int int2, int numberUser, int numberComp) {
	
	if(numberUser > numberComp) {
		cout << "Введите число из интервала [" << int1 << ", " << numberUser << "] ";
		cin >> numberUser;
		cout << numberUser << "\n";
		guessNumber(int1, int2, numberUser, numberComp);
	}

	if (numberUser < numberComp) {
		cout << "Введите число из интервала [" << numberUser << ", " << int2 << "] ";
		cin >> numberUser;
		cout << numberUser << "\n";
		guessNumber(int1, int2, numberUser, numberComp);
	}

	if (numberUser == numberComp) {
		cout << "Ура! Вы угадали! :) "<< endl;
		return 0;
	}
	return 0;
}
