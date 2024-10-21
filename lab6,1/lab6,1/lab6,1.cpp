#include <iostream>
#include "option1.h"
#include "option2.h"
#include "option3.h"
#include "option4.h"
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	int option;

	cout << "Выберите вариант:\n";
	cout << "1. Определение разницы значений кодов в ASCII буквы в прописном и строчном написании\n";
	cout << "2. Определение разницы значений кодов в Windows-1251 буквы в прописном и строчном написании\n";
	cout << "3. Вывод в консоль кода символа, соответствующего введенной цифре\n";
	cout << "4. Выход из программы\n";
	
	while (true) {

		cout << "Ваш выбор: ";
		cin >> option;
		if (option == 1) {
			option1();
		}
		else
			if (option == 2) {
				option2();
			}
			else
				if (option == 3) {
					option3();
				}
				else
					if (option == 4) {
						option4();
					}
					else
						cout << "Введите вариант от 1 до 4." << endl;
	}
}
