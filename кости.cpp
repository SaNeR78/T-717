#include <iostream>
#include <time.h>
#include <conio.h>
#include <windows.h>
using namespace std;
void sum(int a, int b)
{
	int s1 = 0;
	int s2 = 0;
	for (int i = a; i <= a; i++)
	{
		s1 = s1 + i;
	}
	for (int i = b; i <= b; i++)
	{
		s2 = s2 + i;
	}
	cout << "���� ����� ��������: " << s1 << endl;
	cout << "�������� ����������: " << s2 << endl;
}
void whowin(int a, int b)
{
	if (a>b)
		cout << "�� ��������!" << endl;
	if(b>a)
		cout << "��������� ������� ������!" << endl;
	if (a == b)
		cout << "�����!" << endl;
}
void firstmove(int a, int b)
{
	cout << "� ��� ������: " << a << endl;
	cout << "� ���������� ������: " << b << endl;
	if (a>b)
	{
		cout << "�� ������� ������!" << endl;
	}
	if (a<b)
	{
		cout << "������ ������ ���������!" << endl;
	}
	if (a == b)
	{
		b = rand() % 6 + 1;
		a = rand() % 6 + 1;
		cout << "���� ��������..." << endl;
		Sleep(1500);
		cout << "� ��� ������: " << a << endl;
		cout << "� ���������� ������: " << b << endl;
		if (a>b)
		{
			cout << "�� ������� ������!" << endl;
		}
		if (a<b)
		{
			cout << "������ ������ ���������!" << endl;
		}
	}
}
void cubiki(int a)
{
	switch (a)
	{
	case 1:
	{
		cout << "-----------" << endl;
		cout << "|         |" << endl;
		cout << "|    @    |" << endl;
		cout << "|         |" << endl;
		cout << "-----------" << endl;
		break;
	}
	case 2:
	{
		cout << "-----------" << endl;
		cout << "|       @ |" << endl;
		cout << "|         |" << endl;
		cout << "| @       |" << endl;
		cout << "-----------" << endl;
		break;
	}
	case 3:
	{
		cout << "-----------" << endl;
		cout << "|       @ |" << endl;
		cout << "|    @    |" << endl;
		cout << "| @       |" << endl;
		cout << "-----------" << endl;
		break;
	}
	case 4:
	{
		cout << "-----------" << endl;
		cout << "| @     @ |" << endl;
		cout << "|         |" << endl;
		cout << "| @     @ |" << endl;
		cout << "-----------" << endl;
		break;
	}
	case 5:
	{
		cout << "-----------" << endl;
		cout << "| @     @ |" << endl;
		cout << "|    @    |" << endl;
		cout << "| @     @ |" << endl;
		cout << "-----------" << endl;
		break;
	}
	case 6:
	{
		cout << "-----------" << endl;
		cout << "| @     @ |" << endl;
		cout << "| @     @ |" << endl;
		cout << "| @     @ |" << endl;
		cout << "-----------" << endl;
		break;
	}
	}
}
void drowtwice(int a, int b)
{
	if (a>b) {
		b = rand() % 6 + 1;
		a = rand() % 6 + 1;
		cout << "�� ������� �����..." << endl;
		Sleep(1500);
		cout << "� ��� ������: " << a << endl;
		cubiki(a);
		Sleep(1500);
		cout << "��������� ������ �����..." << endl;
		Sleep(1500);
		cout << "� ���������� ������: " << b << endl;
		cubiki(b);
		whowin(a, b);
		sum(a, b);
	}
	else if (a == b)
	{
		b = rand() % 6 + 1;
		a = rand() % 6 + 1;
		if (a>b) {
			cout << "�� ������� �����..." << endl;
			Sleep(1500);
			cout << "� ��� ������: " << a << endl;
			cubiki(a);
			Sleep(1500);
			cout << "��������� ������ �����..." << endl;
			Sleep(1500);
			cout << "� ���������� ������: " << b << endl;
			cubiki(b);
			whowin(a, b);
			sum(a, b);
		}
		if (b>a) {
			cout << "��������� ������ �����..." << endl;
			Sleep(1500);
			cout << "� ���������� ������:" << b << endl;
			cubiki(b);
			Sleep(1500);
			cout << "�� ������� �����..." << endl;
			Sleep(1500);
			cout << "� ��� ������:" << a << endl;
			cubiki(a);
			whowin(a, b);
			sum(a, b);
		}
	}
	else {
		b = rand() % 6 + 1;
		a = rand() % 6 + 1;
		cout << "��������� ������ �����..." << endl;
		Sleep(1500);
		cout << "� ���������� ������:" << b << endl;
		cubiki(b);
		Sleep(1500);
		cout << "�� ������� �����..." << endl;
		Sleep(1500);
		cout << "� ��� ������:" << a << endl;
		cubiki(a);
		whowin(a, b);
		sum(a, b);
	}
}
int main()
{
	setlocale(LC_ALL, "rus");
	int comp;
	int igrok;

	time_t t;
	srand((unsigned)time(&t));
	igrok = rand() % 6 + 1;
	comp = rand() % 6 + 1;
	cout << "������������ ������ ������ ��� ������ ����..." << endl;
	Sleep(2000);
	firstmove(igrok, comp);
	cout << endl;
	cout << "//////////////������ �����!//////////////" << endl;
	drowtwice(igrok, comp);
	Sleep(1500);
	cout << endl;
	cout << "//////////////������ �����!//////////////" << endl;
	drowtwice(igrok, comp);
	Sleep(1500);
	cout << endl;
	cout << "//////////////������ �����!//////////////" << endl;
	drowtwice(igrok, comp);
	Sleep(1500);
	cout << endl;
	cout << "//////////////��������� �����!//////////////" << endl;
	drowtwice(igrok, comp);
	Sleep(1500);
	cout << endl;
	cout << "����� ���� ����� �����: "<< endl;

	system("pause");
	return 0;
}