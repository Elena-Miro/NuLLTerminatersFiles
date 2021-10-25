#include<iostream>
#include<Windows.h>
using namespace std;
int strLen(char str[])
{
	int counter = 0;
	while (str[counter] != '\0')
		counter++;
	return counter;
	/*int i=0;
	for(;str[i];i++)
	return i; */
}
void to_upper(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		if(str[i]>='a'&& str[i]<='z'||
			str[i] >= 'а' && str[i] <= 'я')//если элемент маленькая буква

		str[i] -= 32;//то переводим в нижний регистр
	}
}
void shrink(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		while (str[i] == ' ' && str[i + 1] == ' ')
		{
			for (int j = i + 1; str[j]; j++)
				str[j] = str[j + 1];
		}
			
	}
}
void remove_symbol(char str[], char symbol)
{
	for (int i = 0; str[i]; i++)
	{
		while (str[i] == symbol)
		{
			for (int j = i; str[j]; j++)
				str[j] = str[j + 1];
		}
	}
}
/*bool is_palindrome(char str[])//Реализация функции или определение функции
{
	
	//int n = strlen(str);
	int n = strlen(str);
	char* buffer = new char[n + 1]{};
	//for (int i = 0; i < n; i++)
		//buffer[i] = str[i];
	strcpy(buffer, str);// строка получатель и строка источник
	to_upper(buffer);
	remove_symbol(buffer, ' ');
	n = strlen(buffer);
	
	for (int i = 0; i < n / 2; i++)
	{
		if (buffer[i] != buffer[n - 1 - i])
		{
			delete[] buffer;
			return false; 
		}
	}
	delete[] buffer;
	return true;
}*/
bool is_int_number(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return false;
	}
	return true;
}

void main()
{
	setlocale(LC_ALL, "Russian");
	//char str[] = { 'h','e','l','l','o','\0'};
	/*char str[] = "Hello world!";
	cout << str << endl;
	cout << sizeof(str) << endl;*/
	
	const int n = 256;
	//char str[n]="Хорошо живет на    свете Винни-Пух";
	char str[n] = "Аргентина манит негра";
	cout << "Введите строку: "; //cin >> str;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cin.getline(str, n);
	//SetConsoleCP(866);
	//cout << strLen(str) << endl;
	to_upper(str);
	//cout << str << endl;
	shrink(str);
	//cout << str << endl;
	//cout << is_palindrome(str) << endl;
	/*if (is_palindrome(str))
	{
		cout << "Палиндром" << endl;
	}
	else
	{
		cout << "Не палиндром" << endl;
	}*/
	if (is_int_number(str))
	{
		cout << "Строка число" << endl;
	}
	else
	{
		cout << "Строка не число" << endl;
	}
}