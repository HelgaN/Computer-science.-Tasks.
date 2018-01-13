#include<iostream>
using namespace std;
#include< clocale>;


void main() {
	setlocale(LC_ALL, "RUS");

	double X, A, Y, B, choc, iris;

	cout << "X килограмм шоколадных конфет стоит А рублей \n"  << "введите количество шоколадных конфет в кг" << endl;
	cin >> X;
	cout << "укажите стоимость вышеуказанного количества шоколадных конфет" << endl;
	cin >> A;
	choc = A / X;

	cout << "Y килограмм ирисок стоит B рублей \n"  << "введите количество ирисок в кг" << endl;
	cin >> Y;
	cout << "укажите стоимость вышеуказанного количества ирисок" << endl;
	cin >> B;
	iris = B / Y;

	cout << "Один килограмм шоколадных конфет  стоит " << choc << endl;
	cout << "Один килограмм ирисок стоит " << iris << endl;
	cout << "Шоколадные конфеты дороже ирисок в " << choc / iris << "раз(а)" << endl;

	system("pause");
}