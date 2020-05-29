#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll MOD = 1000000007;

int main(int, char**) {
	string s;
	cin >> s;
	int ret = 0;
	int l = s.size();
	for (int i=0; i<l/2; i++) {
		if (s[i]!=s[l - 1 - i]) ret++;
	}
	cout << ret << endl;
	return 0;
}
