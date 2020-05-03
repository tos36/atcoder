#include <bits/stdc++.h>

using namespace std;

int main(int, char**) {
	int n, k;
	cin >> n >> k;
	vector<int> cnt(n, 1);
	for (int i=0; i<k; i++) {
		int d;
		cin >> d;
		for (int j=0; j<d; j++) {
			int a;
			cin >> a;
			a--;
			cnt[a] = 0;
		}
	}
	int count = 0;
	for (int i=0; i<n; i++) {
		count += cnt[i];
	}
	cout << count << endl;
	return 0;
}
