#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int amountOfRows;
	cout << "Введите кол-во строк: "; cin >> amountOfRows;
	int amountOfColumns;
	cout << "Введите кол-во столбцов: "; cin >> amountOfColumns;
	int** matrix = new int* [amountOfRows];
	for (int row = 0; row < amountOfRows; row++) {
		matrix[row] = new int[amountOfColumns];
	}
	srand(time(0));
	for (int row = 0; row < amountOfRows; row++) {
		for (int col = 0; col < amountOfColumns; col++) {
			matrix[row][col] = rand() % 100 - 50;
		}
	}
	cout << "Первоначальная матрица" << endl;
	for (int row = 0; row < amountOfRows; row++) {
		for (int col = 0; col < amountOfColumns; col++) {
			cout << setw(9) << matrix[row][col];
		}
	}
	cout << "Матрица,транспонированная относительно главной диагонали" << endl;
	for (int row = 0; row < amountOfRows; row++) {
		for (int col = 0; col < amountOfColumns; col++) {
			cout << setw(9) << matrix[col][row];
		}
	}
	cout << "Матрица,транспонированная относительно побочной диагонали" << endl;
	for (int row = amountOfRows - 1; row >= 0; row--) {
		for (int col = amountOfColumns - 1; col >= 0; col--) {
			cout << setw(9) << matrix[col][row];
		}
	}
}