#include<iostream>
#include<Windows.h>
using namespace std;
bool dex(char str[]);
void main()
{

	setlocale(LC_ALL, "Russian");
	const int n = 256;
	char str[n];
	
	cin.getline(str, n);
	cout << "������� ������� � ������:" << endl;
	cin >> str;
	
	if (dex(str)==true)
	{
		cout << "������ ����� ���������� �����" << endl;
	}
	else
	{
		cout << "������ �� ����� ���������� �����" << endl;
	}
	
}
bool dex(char str[])
{

	for (int i = 0; str[i]; i++)
	{
		if (str[i] >= '0' && str[i] <= '9' && (str[i] != '.') && !(str[i] != ','))

			return true;
	}

		return false;
}