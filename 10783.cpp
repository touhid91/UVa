/*
	touhid91
	10783 - Odd Sum
	0.000s #2598
*/

#include <iostream>
#include <cmath>

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
	int n1,n2,
		c_test(0);

	using namespace std;

	cin >> c_test;
	for (int I = 0; I < c_test; I++)
	{
		cin >> n1 >> n2;
		cout << "Case " << I + 1 << ": " << algorithm_sum_of_odd_within_range(n1, n2) << endl;
	}
}
