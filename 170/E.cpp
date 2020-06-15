#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1000000007;
// const ll INF = 1LL<<60;
int INF = numeric_limits<int>::max();

int main(int, char**) {
	int n, q; cin >> n >> q;
	vector<int> A(n), B(n);
	vector<multiset<int>> S(200005);
	multiset<int> maxS;

	auto getMax = [&](int i) {
		if (S[i].size()==0) return -1;
		return *S[i].rbegin();
	};

	auto addYch = [&](int i) {
		int x = getMax(i);
		if (x==-1) return;
		maxS.insert(x);
	};

	auto delYch = [&](int i) {
		int x = getMax(i);
		if (x==-1) return;
		maxS.erase(maxS.find(x));
	};

	auto addEnji = [&](int i, int x) {
		delYch(i);
		S[i].insert(x);
		addYch(i);
	};

	auto delEnji = [&](int i, int x) {
		delYch(i);
		S[i].erase(S[i].find(x));
		addYch(i);
	};
	
	
	for(int i=0; i<n; i++) {
		cin >> A[i] >> B[i];
		addEnji(B[i], A[i]);
	}

	for (int i=0; i<q; i++) {
		int c, d; cin >> c >> d;
		c--;
		delEnji(B[c], A[c]);
		B[c] = d;
		addEnji(B[c], A[c]);
		int ret = *maxS.begin();
		//cout << ret << endl;
		printf("%d\n", ret);
	}
	return 0;
}
