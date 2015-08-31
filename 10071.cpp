/*
	touhid91
	10071 - Back to High School Physics
    0.059s #15905
*/

#include <iostream>

int algorithm_displacement(int v, int t)
{
    // s = vt = v * 2t
    return v * 2 * t;
}

int main()
{
    int v, t;
    using namespace std;
	while (cin >> v >> t)
    {
        cout << algorithm_displacement(v, t) << endl;
    }
    return 0;
}
