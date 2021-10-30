#include<iostream>
#include<Windows.h>
using namespace std;


//#define LINE_SIZE
//#define WORD_SIZE
//#define UPPER
#define DOWN
int word_number(char str[], int n);
void to_upper(char str[]);
void to_down(char str[]);

int main()
{
	setlocale(LC_ALL, "Russian");

#ifdef LINE_SIZE // ���������� ����� ������
	char* str = new char[255];
	const int n = 256;
	cout << "������� ������:" << endl;
	cin.getline(str, n);
	cout << "������ ������ �����:" << strlen(str) << endl;
	delete[]str;
#endif // LINE_SIZE

#ifdef WORD_SIZE//���������� ���������� ���� � ������ 
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char* str = new char[255];
	const int n = 256;

	cout << "������� ������:" << endl;
	cin.get(str, n);
	
	word_number(str,n);
	cout << "� ����� ������ " << word_number(str, n) << " ����" << endl;
	delete[]str;

#endif //WORD_SIZE
#ifdef UPPER //��������� ������ � ������� �������
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char* str = new char[255];
	const int n = 256;
	cout << "������� ������:" << endl;
	cin.get(str, n);
	to_upper(str);
	cout << str << endl;
	delete[]str;
#endif // UPPER

#ifdef DOWN
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char* str = new char[255];
	const int n = 256;
	cout << "������� ������:" << endl;
	cin.get(str, n);
	to_down(str);
	cout << str << endl;
	delete[]str;
#endif // DOWN

	
	
	return 0;
}

int word_number(char str[], int n) 
{
	int counter= 1;
	for (int i = 1; str[i]; i++)
	{
		if (str[i - 1] == ' ' && str[i] != ' ')
			counter++;
	}
		
	return counter;
}
void to_upper(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z' ||
			str[i] >= '�' && str[i] <= '�')

			str[i] -= 32;
	}
}
void to_down(char str[])
{
	for (int i = 0; str[i]; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z' ||
			str[i] >= '�' && str[i] <= '�')

			str[i] += 32;
	}
}