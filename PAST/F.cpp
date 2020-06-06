#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1000000007;
const ll INF = 1LL<<60;
//int INF = numeric_limits<int>::max();

int main(int, char**) {
	int n; cin >> n;
	vector<set<char>> A(n);
	for (int i=0; i<n; i++) {
		string a; cin >> a;
		for (int j=0; j<n; j++) A[i].insert(a[j]);
	}
	string ret = "";
	for (int i=0; i<n/2; i++) {
		bool found = false;
		for (auto c : A[i]) {
			if (A[n-1-i].count(c)) {
				ret += c;
				found = true;
				break;
			}
		}
		if (!found) {
			cout << -1 << endl;
			return 0;
		}
	}
	string ret2 = ret;
	reverse(ret2.begin(), ret2.end());
	if (n%2==1) ret += *A[n/2].begin();
	cout << ret + ret2 << endl;
	return 0;
}
