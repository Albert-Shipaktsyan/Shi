#include <iostream>
using namespace std;

int main() 
{
	int N = 1;
	int*** M = new int** [3];
	for (int i = 0; i < 3; i++) {
		M[i] = new int* [3]; for (int j = 0; j < 3; j++) {
			M[i][j] = new int[3]; for (int k = 0; k < 3;k++) {
				M[i][j][k] = N; N++;
			}
		}
	}
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			for (int k = 0; k < 3;k++) {
				M[i][j][k] = N; N--;
			}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			free(M[i][j]);

		}

		free(M[i]);
	}
	free(M);
	return 0;
}