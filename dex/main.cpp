#include<iostream>
#include<Windows.h>
using namespace std;
bool dex(char str[]);
bool bin(char str[]);
bool hex(char str[]);
void main()
{

	setlocale(LC_ALL, "Russian");
	const int n = 256;
	char str[n];
	
	cin.getline(str, n);
	cout << "Введите символы в строку:" << endl;
	cin >> str;
	dex(str);
	if (dex(str) == true)
	{
		cout << "Строка целое десятичное число" << endl;
	}
	else
	{
		cout << "Строка не целое десятичное число" << endl;

	}
	bin(str);
	if (bin(str) == true)
	{
		cout << "Строка двоичное число" << endl;
	}
	else
	{
		cout << "Строка не двоичное число" << endl;
	}
	hex(str);
	if (hex(str) == true)
	{
		cout << "Строка шестнадцатиричное число" << endl;
	}
	else
	{
		cout << "Строка не шестнадцатиричное число" << endl;
	}
	
}
bool dex(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return false;
	}
	return true;
}
bool bin(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		if (!(str[i] >= '0' && str[i] <= '1')) 
			return false;
	}
	return true;
}
bool hex(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		if (!(str[i] >= '0' && str[i] <= '9' || str[i] >= 'A' && str[i] <= 'F'|| str[i] >= 'a' && str[i] <= 'f'))
			return false;
	}
	return true;
}