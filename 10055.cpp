/*
	touhid91
	10055 - Hashmat the Brave Warrior
	0.198s #17672
*/

#include <iostream>

int main()
{
	long int n1, n2, abs_diff;
	using namespace std;

	while (cin >> n1 >> n2)
	{
		abs_diff = n1 > n2 ? n1 - n2 : n2 - n1;
		cout << abs_diff << endl;
	}
	return 0;
}
