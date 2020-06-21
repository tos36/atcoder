#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1000000007;
const ll INF = 1LL<<60;
//int INF = numeric_limits<int>::max();

int main(int, char**) {
	int n; cin >> n;
	vector<int> A(n);
	for (int i=0; i<n; i++) cin >> A[i];
	int s = 0;
	for (int i=0; i*2<n; i++) {
		s = s ^ (A[2*i] ^ A[2*i + 1]);
	}
	for (int i=0; i<n; i++) {
		int a = s ^ A[i];
		cout << a << " ";
	}
	cout << endl;
	return 0;
}
