#include <iostream>
using namespace std;
void upper(int rows);
main()
{
	int rows;
	cout << "Enter rows: ";
	cin >> rows;
	upper(rows);
}
void upper(int rows)
{
	for (int i = 1; i <= rows; i++)
	{
		for (int j = 1; j <= rows; j++)
		{
			if (j <= rows - i)
			{
				cout << " ";
			}
			else
			{
				cout << "*";
			}
		}
		cout << endl;
	}
	for (int k = rows; k >= 1; k--)
	{
		for (int m = 1; m <= rows; m++)
		{
			if (m <= rows - k)
			{
				cout << " ";
			}
			else
			{
				cout << "*";
			}
		}
		cout << endl;
	}
}
