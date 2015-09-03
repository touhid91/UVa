/*
	touhid91
	10696 - f91
	0.392s #6518
*/

#include <iostream>
using namespace std;

int algorithm_f91(int n)
{
	if (n <= 100)
	{
		return algorithm_f91(algorithm_f91(n + 11));
	}
	else if (n > 100)
	{
		return n - 10;
	}
}

int main() {
	int input;

	while (cin >> input && input != 0)
	{
		cout << "f91(" << input << ") = " << algorithm_f91(input) << endl;
	}

	return 0;
}
