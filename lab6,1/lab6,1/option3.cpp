#include "option3.h"
using namespace std;

int option3() {
	setlocale(LC_CTYPE, "Russian");
	char symbol_1;
	int symbol_3;

	cout << "������� � ���������� �����" << endl;
	cin >> symbol_1;
	if (symbol_1 >= '0' && symbol_1 <= '9')
	{
		symbol_3 = (int)symbol_1;
		cout << "�� ����� ����� � ����� " << symbol_3 << endl;
	}
	else
	{
		cout << "������." << endl;
	}
	return 0;
}