#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string a, b, c, d;
	cin >> a;
	int N, M;
	char K;
	N = a.size();
	b += string(N, '-');
	cout << b << endl;
	while (b != a)
	{
		cin >> d;
		M = d.size();
		if (M != 1)
		{
			if (a == d)
			{
				cout << "�� ������� ����� ����� - " << a << endl;
				return 0;
			}
			else
			{
				cout << "�� �� ������� �����. �� ���������" << endl;
				return 0;
			}

		}
		else {
			K = d[0];
			c = b;
			cout << "������� �����: ";
			for (int i = 0;i < N; i++)
			{
				if (a[i] == K)
					b[i] = K;
			}
			if (c == b)
				cout << "��� ����� �����! " << endl << b << endl;
			else
				cout << "�������! " << endl << b << endl;
		}
	}
	cout << "�� ������� ����� - " << b << "!" << endl;
	return 0;
}