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

void main()
{
	setlocale(LC_ALL, "Russian");
	//char str[] = { 'h','e','l','l','o','\0'};
	/*char str[] = "Hello world!";
	cout << str << endl;
	cout << sizeof(str) << endl;*/
	
	const int n = 256;
	char str[n]="Хорошо живет на    свете Винни-Пух";
	//cout << "Введите строку: "; //cin >> str;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//cin.getline(str, n);
	//SetConsoleCP(866);
	cout << strLen(str) << endl;
	to_upper(str);
	cout << str << endl;
	shrink(str);
	cout << str << endl;

	
}