#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll MOD = 1000000007;

int main(int, char**) {
	int a, b, c;
	cin >> a >> b >> c;
	string s;
	if (a==b&&b!=c){
		s = "Yes";
	} else if (a!=b&&b==c) {
		s = "Yes";
	} else if (a==c&&b!=c) {
		s = "Yes";
	} else {
		s = "No";
	}
	cout << s << endl;
	return 0;
}
