#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <queue>

using namespace std;

int N, M;
int counting = 65;
void startB(char arr[][60], int x, int y)
{
	int tempCounting = 0;
	char alphabet = 'B';
	for (int i = x; i < x + 8; i++)
	{
		for (int j = y; j < y + 8; j++)
		{
			if (arr[i][j] == alphabet)
			{

			}
			else
			{
				tempCounting++;
			}

			if (j == y + 7)
				continue;
			if (alphabet == 'B')
				alphabet = 'W';
			else
				alphabet = 'B';
		}
	}
	if (counting > tempCounting)
	{
		counting = tempCounting;
	}
}
void startW(char arr[][60], int x, int y)
{
	int tempCounting = 0;
	char alphabet = 'W';
	for (int i = x; i < x + 8; i++)
	{
		for (int j = y; j < y + 8; j++)
		{
			if (arr[i][j] == alphabet)
			{

			}
			else
			{
				tempCounting++;
			}

			if (j == y + 7)
				continue;
			if (alphabet == 'B')
				alphabet = 'W';
			else
				alphabet = 'B';
		}
	}
	if (counting > tempCounting)
	{
		counting = tempCounting;
	}
}

int main()
{
	char arr[60][60] = { 0, };

	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i <= N - 8; i++)
	{
		for (int j = 0; j <= M - 8; j++)
		{
			startB(arr, i, j);
			
			startW(arr, i, j);
			if (counting == 0)
				break;
		}
		if (counting == 0)
			break;
	}

	cout << counting;
	
	return 0;
}