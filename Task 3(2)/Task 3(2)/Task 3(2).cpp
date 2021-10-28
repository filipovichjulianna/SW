#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int lenght;
	cout << "Введите длину массива: "; cin >> lenght;
	srand(time(0));
	int* arr = new int[lenght];
	for (int i = 0; i < lenght; i++) {
		arr[i] = rand() % 100 - 50;
		cout << "a[" << i << "]=" << arr[i] << endl;
	}
	int numb = 1, numb1 = 0;
	for (int i = 0; i < lenght; i++) {
		if (arr[i] == arr[i + 1]) {
			numb++;
			if (numb > numb1) {
				numb1 = numb;
			}
		}
		else {
			numb = 1;
		}
	}
	cout << numb1;
}