#include <iostream>
#include <string>
#include <time.h>
#include <iomanip>
using namespace std;

int main()
{
srand(time(0));
int A[4][4];
int B[10];
int C[10];

cout << "TASK 2\n";
for (int i = 0; i < 4; i++)
{
	for (int j = 0; j < 4; j++)
	{
		A[i][j] = rand() % 50 - 5;
		cout << setw(4) << A[i][j] << " ";
		if (j >= 4 - 1)
		{
			cout << endl;
		}
	}
}
cout << "\n";
for (int i = 0; i < 4; i++)
{
	for (int j = 0; j < 4; j++)
	{
		if (j == (4 - 1) - i) printf ("%d ", A[i][j]);

		if (i != j)
		{
			if (j != (4 - 1) - i) printf ("  ", A[i][j]);
		}
		else
		{
			if (j != (4 - 1) - i) printf ("%d ", A[i][j]);
		}
	}
	printf("\n");
}
cout << "\n";
int sum;
int p = 0;
	for (int i = 0; i < 4; i++)
	{
		sum = 0;
		p = 0;
		for (int j = 0; j < 4; j++)
		{
			sum += A[i][j];
			if (A[i][j] < 0)
			{
				p = 1;
				continue;
			}
		}
		if (p != 1) 
			cout << "Row " << i << " sum = " << sum << endl;
	}
	cout << "\nTASK 1\n";
	cout << "1 ARRAY\n";
	for (int i = 0; i < 10; i++)
	{
			B[i] = rand() % 281 - 140;
			cout << " ";
			cout <<" "<< B[i];	
	}
	cout << "\n2 ARRAY\n";
	for (int i = 0; i < 10; i++)
	{
			C[i] = 30 + rand();
			cout << "";
			cout << " " << C[i];
	}
	cout << "\n";
return 0;
}
