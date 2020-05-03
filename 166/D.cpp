#include <bits/stdc++.h>

using namespace std;

int main(int, char**) {
	long long x;
	cin >> x;
	long long a, b;
	long long n_max = 10000;
	for (long long i=0; i<n_max; i++) {
		for (long long j=0; j<n_max; j++) {
			if (x == pow(i, 5) - pow(j, 5)){
				cout << i << " " << j << endl;
				return 0;
			} else if (x == pow(i, 5) + pow(j, 5)){
				cout << i << " " << -j << endl;
                                return 0;
			}

		}
	}
	return 0;
}
