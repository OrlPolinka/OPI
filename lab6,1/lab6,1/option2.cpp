#include "option2.h"
#include <Windows.h>
using namespace std;

int option2() {
	setlocale(LC_CTYPE, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char symbol_1, symbol_2;
	int code_difference;

	cout << "������� � ���������� ��������� � �������� ����� �������� ��������" << endl;
	cin >> symbol_1 >> symbol_2;
	if (symbol_1 >= '�' && symbol_1 <= '�' && symbol_2 >= '�' && symbol_2 <= '�')
	{
		code_difference = abs(symbol_2 - symbol_1);
		cout << "������� �������� ����� ���� �������� �������� � ��������� � �������� ��������� ����� = " << code_difference << endl;
	}
	else
	{
		cout << "������." << endl;
	}
	return 0;
}