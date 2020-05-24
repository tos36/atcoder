#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll MOD = 1000000007;

int main(int, char**) {
	int n, m;
	cin >> n >> m;
	vector<int> cnd;
	for (int i=0; i<m; i++) {
		int k;
		cin >> k;
		int now=0;
		for(int j=0; j<k; j++) {
			int s; cin >> s;
			now += pow(2, s-1);
		}
		cnd.push_back(now);
	}

	vector<int> p;
	for (int i=0; i<m; i++) {
		int s; cin >>s;
		p.push_back(s);
	}

	int cnt = 0;
	for (int bit=0; bit < (1<<n); ++bit) {
		bitset<16> check;
		for (int i=0; i<m; i++) {
		//cout << bitset<16>(bit) << "|" <<  bitset<16>(cnd[i]) << endl;
			check = bitset<16>(bit) & bitset<16>(cnd[i]);
			if (check.count()%2 != p[i]) break;
			else if (i==m-1) cnt++;
			else continue;
		}
	}
	cout << cnt << endl;
	return 0;
}
