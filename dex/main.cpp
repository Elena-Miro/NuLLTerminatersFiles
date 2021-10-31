#include<iostream>
#include<Windows.h>
using namespace std;
bool dex(char str[]);
bool bin(char str[]);
bool hex(char str[]);
bool int_dex(char str[]);
int intovoe_dex(char str[]);
int  strBinToDec(char str[], size_t n);
int  strHexToDec(char str[], size_t n);

int main()
{

	setlocale(LC_ALL, "Russian");
	const int n = 256;
	char str[n];
	
	cin.getline(str, n);
	cout << "Введите символы в строку:" << endl;
	cin >> str;
	
	if (dex(str) == true)
	{
		cout << "Строка целое десятичное число"<< endl;
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
	if (dex(str) == true)
	{
		cout << intovoe_dex(str) << endl;
		
	}
	else
	{
		cout << "Строка не десятичное число число" << endl;
	}
	if (bin(str) == true)
	{
		cout << strBinToDec(str,n)<<" из двоичного в десятичное" << endl;

	}

	else
	{
		cout << "Строка не двоичное число" << endl;
	}
	if (hex(str) == true)
	{
		cout << strHexToDec(str,n) << endl;
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
int intovoe_dex(char str[])
{
	int sum = 0;
	for (int i = 0; str[i]; ++i)
	{
		if (i > 0)
		{
			sum *= 10;
		}
		sum += (int)str[i] - 48;
	}
	return sum;
}
int  strBinToDec(char str[], size_t n) {
	int number = 0;
	size_t counter = 0;
	n = strlen(str);
	for (int i = n - 1; i >= 0; --i) {
		
		if (str[i] == '1') {
			number += pow(2, counter);

		}++counter;
	}

	return number;
}
int  strHexToDec(char str[], size_t n) {
	int number = 0;
	size_t counter = 0;
	n = strlen(str);

	
		for (int i = n - 1; i >= 0; --i) {
			if (str[i] >= '0' && str[i] <= '9') {
				number += (str[i]-'0') * pow(16, counter);
				counter++;
			}
			else if (str[i] >= 'a' && str[i] <= 'f') {
				number += (str[i]-'W') * pow(16, counter);
				++counter;
			}
		}
	

	return number;
}

