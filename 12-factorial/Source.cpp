#include <iostream>
#include <windows.h> 
#include <string>;
using namespace std;
long double fact(int N)
{
	if (N < 0)
		return 0;
	if (N == 0)
		return 1;
	else // 
		return N * fact(N - 1);
}
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int N;
	string S;
	cin >> S;
	if (S[0] == '-') {
		for (int i = 1;i < S.size();i++) {
			if (!isdigit(S[i])) {
				cout << "¬ведена строка";
				return 0;
			}
		}
		cout << "¬ведено число меньше нул€"; return 0;
	}
	for (int i = 0;i < S.size();i++) {
		if (!isdigit(S[i])) {
			cout << "¬ведена строка"; return 0;
		}
	}
	N = stoi(S);
	if (N > 1000) cout << "¬ведено большое число";
	else
		cout << fact(N) << endl;
	return 0;
}