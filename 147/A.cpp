#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll MOD = 1000000007;

int main(int, char**) {
	int a, b, c;
	string s;
	cin >> a >> b >> c;
	if (a+b+c < 22) s ="win";
	else s = "bust";
	cout << s << endl;
	return 0;
}
