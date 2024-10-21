#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int A = 0, B, C = 0;
	cout << "Введите стоимость товара: " << endl;
	cin >> B;
	do
	{
		A = A + 1;
		C = A * B;
	} 
	while (C < 5);
	cout << "Стоимость товаров в чеке составляет " << C << " руб." << endl;
	return 0;
}