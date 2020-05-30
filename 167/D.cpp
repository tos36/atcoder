#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1000000007;
const ll INF = 1LL<<60;

int main(int, char**) {
	ll n, k;
	cin >> n >> k;
	vector<int> A;
	vector<int> visit(n, -1);
	for (int i=0; i<n; i++) {
		int a; cin >> a;
		a--;
		A.push_back(a);
	}
	ll tour = 0;
	ll roop = 0;
	int now = 0;
	int rstart;
	visit[now] = 0;
	while (true) {
		int next = A[now];
		if (visit[next]==-1) {
			visit[next] = visit[now] + 1;
			now = next;
		} else {
			tour = visit[next];
			roop = visit[now] + 1 - visit[next];
			rstart = next;
			break;
		}
	}
	// check last position
	if (k < tour) {
		int start = 0;
		for (int i=1; i<k+1; i++) {
			start = A[start];
		}
		cout << start + 1 << endl;
		return 0;
	}
	k -= tour;
	k %= roop;
	for (int i=1; i<k+1; i++) {
		rstart = A[rstart];
	}
	cout << rstart + 1 << endl;	
	return 0;
}
