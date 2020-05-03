#include <bits/stdc++.h>

using namespace std;

int main(int, char**) {
	int n, m;
	cin >> n >> m;
	vector<long long> hs(n, 0);
	vector<int> good(n, 1);
	for (int i=0; i<n; i++) {
		long long h;
		cin >> h;
		hs.at(i) = h;
	}
	for (int i=0; i<m; i++) {
		int a, b;
		cin >> a >> b;
		a--; b--;
		if (hs[a] > hs[b]) {
			good[b] = 0;
		} else if (hs[b] > hs[a]) {
			good[a] = 0;
		} else {
			good[a] = 0;
			good[b] = 0;
		}
	}
	int count = 0;
	for (int i=0; i<n; i++) {
		count += good[i];
	}
	cout << count << endl;
	return 0;
}
