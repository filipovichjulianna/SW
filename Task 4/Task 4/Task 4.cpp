#include <iostream>
#include <math.h>
using namespace std;

int main()

{
	setlocale(LC_ALL, "RUS");
	int l, w, h, l1, w1;
	cout << "Введите длину, ширину, высоту параллелипипеда: " << endl; 
	cin >> l;
    cin >>w;	
	cin >> h;
	cout << "Ввндите длину и ширину отверстия : " << endl;
	cin >> l1;
	cin >> w1;
	if ((l >= l1) && (w >= w1)) {

		cout << "Параллелипипед проходит в отверстие";

	}

	else {

		cout << "Параллелипипед проходит в отверстие";

	}

}
