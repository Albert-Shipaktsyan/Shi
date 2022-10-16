#include <iostream>
#include <windows.h> 
#include <string>
using namespace std;
long double Fib(int n)
{
	if (n == 1 || n == 2) return (n - 1);
	return Fib(n - 1) + Fib(n - 2);
}
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int N;
	string S;
	cin >> S;
	if (S[0] == '-')
	{
		for (int i = 1;i < S.size();i++)
		{
			if (!isdigit(S[i]))
			{
				cout << "Введено не целое число" << endl;
				return 0;
			}
		}
		cout << "Число меньше единицы" << endl; return 0;
	}
	for (int i = 0;i < S.size();i++)
	{
		if (!isdigit(S[i])) {
			cout << "Введено не целое число" << endl;; return 0;
		}
	}
	N = stoi(S);
	if (N > 100) cout << "Большое число" << endl;
	else
		for (int j = 1; j < N + 1;j++)
			cout << Fib(j) << " ";
	return 0;
}