#include "option1.h"
using namespace std;

int option1() {
	setlocale(LC_CTYPE, "Russian");
	char symbol_1, symbol_2;
	int code_difference;

	cout << "¬ведите с клавиатуры заглавную и строчную буквы латинского алфавита" << endl;
	cin >> symbol_1 >> symbol_2;
	if (symbol_1 >= 'A' && symbol_1 <= 'Z' && symbol_2 >= 'a' && symbol_2 <= 'z')
	{
		code_difference = abs(symbol_2 - symbol_1);
		cout << "разницы значений кодов букв латинского алфавита в прописном и строчном написании равно = " << code_difference << endl;
	}
	else
	{
		cout << "ќшибка." << endl;
	}
	return 0;
}