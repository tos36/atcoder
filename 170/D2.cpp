#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1000000007;
const ll INF = 1LL<<60;
//int INF = numeric_limits<int>::max();

int main(int, char**) {
	int n; cin >> n;
	vector<int> A(n, 0);
	vector<bool> check(n, true);
	for (int i=0; i<n; i++) cin >> A[i];
	map<int, int> count;
	int maxA = 0;
	for (int i=0; i<n; i++) {
		maxA = max(maxA, A[i]);
		count[A[i]]++;
	}

	sort(A.begin(), A.end());
	for (int i=0; i<n; i++) {
		int a = A[i];
		if (!check[i]) continue;
		for (int i=2; i*a<=maxA; i++) {
			if (binary_search(A.begin(), A.end(), i*a)){
				auto itr = lower_bound(A.begin(), A.end(), i*a);
				int dist = itr - A.begin();
				check[dist] = false;
			}
		}
		if (count[a]>1) {
			check[i] = false;
			continue;
		}
	}
	int ret = 0;
	for (int i=0; i<n; i++) ret += check[i];
	cout << ret << endl;
	return 0;
}
