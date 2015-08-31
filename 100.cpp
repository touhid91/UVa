/*
	touhid91
	100 - The 3n + 1 problem
	0.316s #11013
*/

#include <iostream>

int algorithm_3n_plus_1(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else if (n & 1)
	{
		return 1 + algorithm_3n_plus_1(3 * n + 1);
	}
	else
	{
		return 1 + algorithm_3n_plus_1(n / 2);
	}
}


int main()
{
	int i, j,
		iteration_value, max;

	using namespace std;
	while (cin >> i >> j)
	{
		max = 0;
		if (i < j)
		{
			// i -> j
			for (int I = i; I <= j; I++)
			{
				iteration_value = algorithm_3n_plus_1(I);
				if (max < iteration_value)
				{
					max = iteration_value;
				}
			}
		}
		else
		{
			// j -> i
			for (int I = j; I <= i; I++)
			{
				iteration_value = algorithm_3n_plus_1(I);
				if (max < iteration_value)
				{
					max = iteration_value;
				}
			}
		}

		cout << i << " " << j << " " << max << endl;
	}
	return 0;
}
