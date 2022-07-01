#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	const int coll = 5;
	const int row = 5;

	int ar[row][coll];

	srand(time(NULL));

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < coll; j++)
		{
			ar[i][j] = rand() % 1001;
		}
	}

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < coll; j++)
		{
			cout << ar[i][j] << "\t";
		}

		cout << "\n";
	}

	int temp = 0;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < coll; j++)
		{ 
			for (int a = 0; a < row; a++)
			{
				for (int b = 0; b < coll; b++)
				{
					if (ar[a][b] > ar[i][j])
					{
						temp = ar[a][b];
						ar[a][b] = ar[i][j];
						ar[i][j] = temp;
					}
				}
			}
		}
	}

	cout << "\n";

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < coll; j++)
		{
			cout << ar[i][j] << "\t";
		}

		cout << "\n";
	}

}
