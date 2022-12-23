#include <iostream>
#include <string>
#include <windows.h>
using namespace std;


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string films[28] = { "�����, ������, ��� ������","������ �� ��� � ������","7 ���� � ���","������� ��������",
		"���� �� ������","�� ����","�����","���� ����","������� ���","50 �������� ������","���������",
		"�� ��� ������","�������","������","������� �� �����","����","������������","������",
		"�������� ������","��������","��� � �����","��������� ����","����� ���","����������","������",
		"���� ������","������� �����","��������� �����" };
	string persons[28] = { "����� �������","�����","����� �����","Lana Del Rey","����������","������ ������",
		"����������","����� ����������","Weeknd","ZAYN","Alexandra Dadario","Justin Bieber","Cher","LIDA",
		"������","������� �������","���� ���","������� ���� ���������","Doja Cat","Eva Elfie",
		"��� ���������","����� �������","Selena Gomez","����� �������","������� �������",
		"ramzes666","Icona Pop","Thomas Mraz" };
	string music[9] = { "Young and Beautiful - Lana Del Rey","Pillowtalk - ZAYN","Blinding Light - Weeknd",
		"Spirits - The Strumbellas","�������� - �����������","���� ���� - LIDA","Dior - ���� ���",
		"Ribs - Lorde","����� - ����������" };
	string lit = "����������������������������";
	string name, surname;
	int year;
	cout << "���: ";
	cin >> name;
	cout << "�������: ";
	cin >> surname;
	cout << "��� ��������: ";
	cin >> year;
	for (int i = 0; i < 28; i++)
		if (name[0] == lit[i]) {
			cout << "��� �����: " << films[i] << endl;
			break;
		}
	for (int j = 0; j < 28; j++)
		if (surname[0] == lit[j]) {
			cout << "���� ������: " << persons[j] << endl;
			break;
		}

	while (year / 10 != 0)
	{
		year = year / 1000 + (year / 100) % 10 + (year / 10) % 10 + year % 10;
	}
	year = year - 1;
	cout << "������ ��� ���: " << music[year] << endl;

	return 0;
}