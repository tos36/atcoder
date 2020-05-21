#include <bits/stdc++.h>

using namespace std;

int main(int, char**) {
	int n;
	string s;
	int q;
	cin >> n >> s >> q;
	vector<set<int>> alp;
	alp.assign(26, set<int>());

	for (int i=0; i<n; i++) {
		char c = s.at(i);
		alp[s.at(i) - 'a'].insert(i + 1);
	}


	for (int i=0; i<q; i++) {
		int qu;
		scanf("%d", &qu);
		if (qu==1) {
			int l;
			char c;
			scanf("%d %c", &l, &c);
			char b = s.at(l - 1);
			alp[b - 'a'].erase(l);
			s.at(l - 1) = c;
			alp[c - 'a'].insert(l);
		} else {
			int l, r;
			scanf("%d %d", &l, &r);
			int cnt = 0;
			for (int i=0; i<26; i++) {
				if (alp[i].empty()) continue;
				auto itr = alp[i].lower_bound(l);
				if (itr != alp[i].end() && *itr <= r) cnt++;
			}
			cout << cnt << endl;
		}
	}
	return 0;
}
