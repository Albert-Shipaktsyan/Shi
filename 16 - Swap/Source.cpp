#include <iostream>
using namespace std;

void swap1(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

void swap2(int& a, int& b) {
	a = a + b;
	b = a - b;
	a = a - b;
}

void swap3(int& a, int& b) {
	a = a ^ b;
	b = b ^ a;
	a = a ^ b;
}
int main() {
	int a = 1;
	int b = 2;
	return 0;
}