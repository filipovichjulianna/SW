#include <iostream>
#include <math.h>
using namespace std;

int main()

{
	setlocale(LC_ALL, "RUS");
	int x;
	cout << "Введите x : "; cin >> x;
	int raz = 0;
	int ten = 1;
	while (true) {
		ten *= 10;
		if (ten > x) {
			ten /= 10;
			while (ten >= 1) {
				raz = x / ten;
				cout << raz << endl;
				x %= ten;
				ten /= 10;

			}



		}

	}

}
