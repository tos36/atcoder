#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1000000007;
const ll INF = 1LL<<60;
//int INF = numeric_limits<int>::max();

int main(int, char**) {
	ll a, b, x;
	cin >> a >> b >> x;
	if (a + b > x) {
		cout << 0 << endl;
		return 0;
	} else if (a * 1000000000 + b * 10 < x) {
		cout << 1000000000 << endl;
		return 0;
	}
	int keta = 0;
	ll temp = 0;
	while (x >= (temp + 1) * a + (keta + 1) * b) {
		keta++;
		temp += 9 * pow(10, keta - 1);
	}
	cout << min((x - b * keta) / a, temp) << endl;
	return 0;
}
