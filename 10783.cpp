/*
	touhid91
	10783 - Odd Sum
	0.000s #2598
*/

#include <iostream>
#include <math.h>

int algorithm_odd_nums_within_range(float offset_from_zero)
{
	return ceil(offset_from_zero / 2);
}

int algorithm_sum_of_odd_within_range(int n1, int n2)
{
	// assumes n2 > n1
	// sum(n) = square(n)
	//	square(n2) - square(n1)
	return pow(algorithm_odd_nums_within_range(n2), 2) - pow(algorithm_odd_nums_within_range(n1 - 1), 2);
}

int main()
{
	int c_test(0),
		inputs[100][2];

	using namespace std;

	cin >> c_test;
	for (int I = 0; I < c_test; I++)
	{
		cin >> inputs[I][0];
		cin >> inputs[I][1];
	}

	for (int I = 0; I < c_test; I++)
	{
		cout << "Case " << I + 1 << ": " << algorithm_sum_of_odd_within_range(inputs[I][0], inputs[I][1]) << endl;
	}
}
