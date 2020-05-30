#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll MOD = 1000000007;
//ll INF = 1LL<<60;
int INF = std::numeric_limits<int>::max();

int main(int, char**) {
	int n, m, x;
	cin >> n >> m >> x;
	vector<int> C;
	vector<vector<int>> A(n, vector<int>(m));
	for (int i=0; i<n; i++) {
		int c; cin >> c;
		C.push_back(c);
		for (int j=0; j<m; j++) {
			int a; cin >> a;
			A[i][j] = a;
		}
	}

	int ret = INF;
	for (int bit=0; bit < (1<<n); ++bit) {
		vector<int> M(m, 0);
		int nowcost = 0;
		for (int i=0; i<n; i++) {
			if (bit & (1<<i)){
				nowcost += C[i];
				for (int j=0; j<m; j++) {
					M[j] += A[i][j];
				}
			}
		}

		bool flag = true;
		for (int j=0; j<m; j++) {
			if (M[j] < x) flag = false;
		}

		if (flag) ret = min(ret, nowcost);
	}
	if (ret==INF) ret = -1;
	cout << ret << endl;
	return 0;
}
