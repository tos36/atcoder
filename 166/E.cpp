#include <bits/stdc++.h>

using namespace std;

int main(int, char**) {
	int n;
	cin >> n;
	vector<long long> A;
	int diff = 0;
	for (int i=0; i<n; i++) {
		long long a;
		cin >> a;
		if (a > n) {
			diff++;
			continue;
		} else {
			A.push_back(a-diff);
		}
	}
	cout << diff << endl;
	n = n - diff;
	long long count = 0;
	for (int s=0; s<n; s++) {
		long long a = A[s];
		for (int i=s+a+1; i<n; i++) {
			cout << a << " " << i << endl;
			if (A[i] == i - s - a) count++;
		}
	}
	cout << count << endl;
	return 0;
}
