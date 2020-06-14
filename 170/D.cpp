#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1000000007;
const ll INF = 1LL<<60;
//int INF = numeric_limits<int>::max();

int main(int, char**) {
	int n; cin >> n;
	vector<int> A(n, 0);
	for (int i=0; i<n; i++) cin >> A[i];
	map<int, int> count;
	for (int i=0; i<n; i++) {
		count[A[i]]++;
	}


	sort(A.begin(), A.end());
	bool flag;
	int ret =0;
	for (int i=0; i<n; i++) {
		int a = A[i];
		flag = true;
		for (int j=2; j*j <= a; j++) {
			if (a%j==0) {
				if (binary_search(A.begin(), A.end(), j) || binary_search(A.begin(), A.end(), a/j)){
					flag = false;
					break;
				}
			}
		}
		if (a!=1 && binary_search(A.begin(), A.end(), 1)) flag = false;
		if (count[a]>1) flag = false;
		if (flag) {
			ret++;
		}
	}
	cout << ret << endl;
	return 0;
}
