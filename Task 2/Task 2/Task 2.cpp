#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int k;
	cout << "Введите день недели : ";
	cin >> k;
	while (k < 0 || k>7) {
		cout << "Введено неверное значение, введите от 1 до 7:"<<endl;
		cin >> k;
	}
	switch (k) {
	case 1: cout << "Понедельник"; break;
	case 2: cout << "Вторник"; break;
	case 3: cout << "Среда"; break;
	case 4: cout << "Четверг"; break;
	case 5: cout << "Пятница"; break;
	case 6: cout << "Суббота"; break;
	case 7: cout << "Воскресенье"; break;

	}

}