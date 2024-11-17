#include <iostream>

using namespace std;


int main()
{
	int N;
	cin >> N;
	int* arrayOfNumbers = new int[N];
	for (int i = 0; i < N; i++)
	{
		cin >> arrayOfNumbers[i];
	}
	int indexOfMax = 0, Max = INT_MIN, indexOfMin = 0, Min = INT_MAX;
	int sumOfPositive = 0;
	for (int i = 0; i < N; i++)
	{
		if (arrayOfNumbers[i] > Max)
		{
			indexOfMax = i;
			Max = arrayOfNumbers[i];
		}
		if (arrayOfNumbers[i] < Min)
		{
			indexOfMin = i;
			Min = arrayOfNumbers[i];
		}
		if (arrayOfNumbers[i] > 0)
		{
			sumOfPositive += arrayOfNumbers[i];
		}

	}
	int productBetween = 1;
	int start = indexOfMin, end = indexOfMax;
	if (indexOfMax < indexOfMin)
	{
		start = indexOfMax;
		end = indexOfMin;
	}
	for (int i = start + 1; i < end; i++)
	{
		productBetween *= arrayOfNumbers[i];
	}

	cout << sumOfPositive << " " << productBetween << endl;
	
	return 0;
}