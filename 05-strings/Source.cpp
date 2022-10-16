#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
int main() 
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string a;
	string b;
	int N;
	int i;
	i = 0;
	cin >> a;
	N = a.size();
	while (i<N)
	{
		b = b += a[i];
			i++;
	}
	cout << b << endl;
	return 0;
}