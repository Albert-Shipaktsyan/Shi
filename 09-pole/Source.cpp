#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string a, b, c;
	cin >> a;
	int N;
	char K;
	N = a.size();
	b += string(N, '-');
	cout << b << endl;
	while (b != a)
	{
		c = b;
		cout << "������� �����: ";
		cin >> K;
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
	cout << "�� ������� ����� - " << b << "!" << endl;
	return 0;
}