#include "option1.h"
using namespace std;

int option1() {
	setlocale(LC_CTYPE, "Russian");
	char symbol_1, symbol_2;
	int code_difference;

	cout << "������� � ���������� ��������� � �������� ����� ���������� ��������" << endl;
	cin >> symbol_1 >> symbol_2;
	if (symbol_1 >= 'A' && symbol_1 <= 'Z' && symbol_2 >= 'a' && symbol_2 <= 'z')
	{
		code_difference = abs(symbol_2 - symbol_1);
		cout << "������� �������� ����� ���� ���������� �������� � ��������� � �������� ��������� ����� = " << code_difference << endl;
	}
	else
	{
		cout << "������." << endl;
	}
	return 0;
}