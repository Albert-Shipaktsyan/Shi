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
		cout << "Введите букву: ";
		cin >> K;
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
	cout << "Вы угадали слово - " << b << "!" << endl;
	return 0;
}