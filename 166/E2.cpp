#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	map<long long, long long> C;
	vector<long long> B;
	for (int i=0; i<n; i++) {
		long long a, b, c;
		cin >> a;
		b = a + i + 1;
		c = i + 1 - a;
		B.push_back(b);
		if (!C.count(c)) {
			C[c] = 1;
		} else {
			C.at(c)++;
		}
	}
	long long cnt = 0;
	for(long long b : B) {
		if (C.count(b)) cnt += C.at(b);
	}
	cout << cnt << endl;
	return 0;
}
