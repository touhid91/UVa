/*
	touhid91
	11332 - Summing Digits
	0.000s #677
*/

#include <cmath>
#include <iostream>

using namespace std;

short algorithm_summing_digits(long int number)
{
	short c_digits = log10((float)number) + 1,
		sum = 0;

	for (short I = 0; I < c_digits; I++)
	{
		sum += number / (int)pow(10, I) % 10;
	}

	return sum < 10 // one decimal
		? sum
		: algorithm_summing_digits(sum);
}

int main()
{
	long int number;
	while (cin >> number)
	{
		if(number == 0)
			break;
		cout << algorithm_summing_digits(number) << endl;
	}

	return 0;
}
