#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	int k;
	cout << "������� ���� ������ : ";
	cin >> k;
	while (k < 0 || k>7) {
		cout << "������� �������� ��������, ������� �� 1 �� 7:"<<endl;
		cin >> k;
	}
	switch (k) {
	case 1: cout << "�����������"; break;
	case 2: cout << "�������"; break;
	case 3: cout << "�����"; break;
	case 4: cout << "�������"; break;
	case 5: cout << "�������"; break;
	case 6: cout << "�������"; break;
	case 7: cout << "�����������"; break;

	}

}