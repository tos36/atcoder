#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1000000007;
const ll INF = 1LL<<60;
//int INF = numeric_limits<int>::max();

int main(int, char**) {
	int h, w, k; cin >> h >> w >> k;
	vector<int> emp, nemp;
	vector<string> S;
	vector<vector<int>> ret(h, vector<int>(w, 0));
	int cnt=1;
	for (int i=0; i<h; i++) {
		string s; cin >> s;
		S.push_back(s);
		bool empty = true;
		for (int j=0; j<w; j++) {
			if (s[j]=='#') {
				empty = false;
				break;
			}
		}

		if (empty) {
			emp.push_back(i);
			continue;
		} else {
			nemp.push_back(i);
		}

		int lichi = 0;
		for (int j=0; j<w; j++) {
			ret[i][j] = cnt;
			if (s[j]=='#') {
				lichi = j;
				cnt++;
			} else if (s[j=='.'] && j==w-1) {
				cnt--;
				for (int k=w-1; k>lichi; k--) {
					ret[i][k] = cnt;
				}
				cnt++;
			}
		}
	}
	int last = nemp[nemp.size()-1];
	for (int i=0; i<emp.size(); i++) {
		int now = emp[i];
		int t;
		if (now > last) {
			t = last;
		} else {
			auto itr = lower_bound(nemp.begin(), nemp.end(), now);
			t = *itr;
		}
		for (int j=0; j<w; j++) ret[now][j] = ret[t][j];
	}

	for (int i=0; i<h; i++) {
		for (int j=0; j<w; j++) {
			cout << ret[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
