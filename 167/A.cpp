#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1000000007;
const ll INF = 1LL<<60;

int main(int, char**) {
	string s, t;
	cin >> s >> t;
	t.erase(t.size() - 1);
	if (s==t) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0; 
}
