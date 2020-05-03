#include <bits/stdc++.h>

using namespace std;

int main(int, char**) {
	long long x;
	cin >> x;
	long long g = 100;
	long long c = 0;
	while (true) {
		c++;
		g = g * 1.01;
		if (g >= x) {
			cout << c << endl;
			return 0;
		}
	}
	return 0;
}
