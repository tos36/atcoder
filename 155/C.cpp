#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll MOD = 1000000007;

int main(int, char**) {
	int n;
	cin >> n;
	map<string, int> mp;
	int x = 0;
	for (int i=0; i<n; i++) {
		string s;
		cin >> s;
		mp[s] += 1;
		if (mp[s] > x) x = mp[s];
	}
	vector<string> ans;
	for (auto i=mp.begin(); i!=mp.end(); ++i){
		if (i->second == x) ans.push_back(i->first);
	}
	sort(ans.begin(), ans.end());
	for (auto i:ans) cout << i << endl;
	return 0;
}
