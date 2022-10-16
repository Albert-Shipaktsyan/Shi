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
				cout << "Вы угадали целое слово - " << a << endl;
				return 0;
			}
			else
			{
				cout << "Вы не угадали слово. Вы проиграли" << endl;
				return 0;
			}

		}
		else {
			K = d[0];
			c = b;
			cout << "Введите букву: ";
			for (int i = 0;i < N; i++)
			{
				if (a[i] == K)
					b[i] = K;
			}
			if (c == b)
				cout << "Нет такой буквы! " << endl << b << endl;
			else
				cout << "Угадали! " << endl << b << endl;
		}
	}
	cout << "Вы угадали слово - " << b << "!" << endl;
	return 0;
}