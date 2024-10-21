#include "option2.h"
#include <Windows.h>
using namespace std;

int option2() {
	setlocale(LC_CTYPE, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char symbol_1, symbol_2;
	int code_difference;

	cout << "Введите с клавиатуры заглавную и строчную буквы русского алфавита" << endl;
	cin >> symbol_1 >> symbol_2;
	if (symbol_1 >= 'А' && symbol_1 <= 'Я' && symbol_2 >= 'а' && symbol_2 <= 'я')
	{
		code_difference = abs(symbol_2 - symbol_1);
		cout << "разницы значений кодов букв русского алфавита в прописном и строчном написании равно = " << code_difference << endl;
	}
	else
	{
		cout << "Ошибка." << endl;
	}
	return 0;
}