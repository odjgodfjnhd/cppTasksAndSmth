#include <iostream>


using namespace std;


int main()
{

	int N;
	cin >> N;
	int** Triangle = new int* [N + 1];
	for (int i = 0; i < N + 1; i++)
	{
		Triangle[i] = new int[N + 1];
		Triangle[i][0] = 1;
		for (int j = 1; j < N + 1; j++)
		{
			Triangle[i][j] = 0;
		}


	}
	for (int i = 1; i < N + 1; i++)
	{
		for (int j = 1; j < N + 1; j++)
		{
			Triangle[i][j] = Triangle[i - 1][j] + Triangle[i - 1][j - 1];
		}
	}
	for (int j = 0; j < N + 1; j++)
	{
		cout << Triangle[N][j] << " ";
	}

	return 0;
}