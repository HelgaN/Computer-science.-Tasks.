#include<iostream>
#include<clocale>
#include<cstdlib>
#include<ctime>
using namespace std;

void main() {
	setlocale(LC_ALL, "RUS");
	const int N = 20;
	int array[N], a = 2, b = 5, val2 = 0, val3 = 0, val4 = 0, val5 = 0;
	srand(time(NULL));

	for (int i = 0; i < N; i++) {
		array[i] = a + rand() % (b - a + 1);
		cout << "[" << i << "]" << " �������  " << array[i] << endl;

		switch (array[i]) {
		case 2:
			val2 += 1;
			break;
		case 3:
			val3 += 1;
			break;
		case 4:
			val4 += 1;
			break;
		case 5:
			val5 += 1;
			break;
		}
	}

	cout << "\"�����\" �� ����������� - " << val2 << endl;
	cout << "\"�����\" �� ����������� - " << val3 << endl;
	cout << "\"��������\" �� ����������� - " << val4 << endl;
	cout << "\"�������\" �� ����������� - " << val5 << endl;

	system("pause");
}
