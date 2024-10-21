#include <iostream>
//OrlovskayaPolina2005
//4F726C6F76736B617961 506F6C696E61 32303035
//4F 72 6C 6F 76 73 6B 61 79 61 50 6F 6C 69 6E 61 32 30 30 35
//4F 72 6C 6F 76 73 6B 61 79 61 50 6F 6C 69 6E 61 32 30 30 35

//ОрловскаяПолина2005
//41E44043B43E43244143A43044F 41F43E43B43843D430 32303035
//D0 9E D1 80 D0 BB D0 BE D0 B2 D1 81 D0 BA D0 B0 D1 8F D0 9F D0 BE D0 BB D0 B8 D0 BD D0 B0 32 30 30 35
//D0 9E D1 80 D0 BB D0 BE D0 B2 D1 81 D0 BA D0 B0 D1 8F D0 9F D0 BE D0 BB D0 B8 D0 BD D0 B0 32 30 30 35

//Орловская2005Polina
//41E44043B43E43244143A43044F 32303035 506F6C696E61
//D0 9E D1 80 D0 BB D0 BE D0 B2 D1 81 D0 BA D0 B0 D1 8F 32 30 30 35 50 6F 6C 69 6E 61
//D0 9E D1 80 D0 BB D0 BE D0 B2 D1 81 D0 BA D0 B0 D1 8F 32 30 30 35 50 6F 6C 69 6E 61

int main()
{
	int number = 0 * 123456789;
	char hello[] = "Hello, ";
	char lfie[] = "OrlovskayaPolina2005";
	char rfie[] = "ОрловскаяПолина2005";
	char lr[] = "Орловская2005Polina";

	wchar_t Lfie[] = L"OrlovskayaPolina2005";
	wchar_t Rfie[] = L"ОрловскаяПолина2005";
	wchar_t LR[] = L"Орловская2005Polina";

	std::cout << hello << lfie << std::endl;
	return 0;
}