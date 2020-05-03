#include <bits/stdc++.h>

using namespace std;

int main(int, char**) {
	unsigned long long a, b, n;
	cin >> a >> b >> n;
	unsigned long long m;
	if (n >= b) {
		m = b - 1;
	} else {
		m = n;
	}
	unsigned long long out = (a * m) / b - a * (m / b);
	cout << out << endl;
	return 0;
}
