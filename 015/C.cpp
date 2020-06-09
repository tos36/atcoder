#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll MOD = 1000000007;
const ll INF = 1LL<<60;
//int INF = numeric_limits<int>::max();

int main(int, char**) {
	int n, k;
	cin >> n >> k;
	vector<vector<int>> Q(n, vector<int>(k, 0));
	for (int i=0; i<n; i++) {
		for (int j=0; j<k; j++) {
			cin >> Q[i][j];
		}
	}
	for (int i0=0; i0<k; i0++){
		int now0 = Q[0][i0];
		int now1=0, now2=0, now3=0, now4=0;
		for (int i1=0; i1<k; i1++) {
			if (n>1) now1 = Q[1][i1];
			else now1 = 0;
			for (int i2=0; i2<k; i2++) {
				if (n>2) now2 = Q[2][i2];
				else now2 = 0;
				for (int i3=0; i3<k; i3++) {
					if (n>3) now3 = Q[3][i3];
					else now3 = 0;
					for (int i4=0; i4<k; i4++) {
						if (n>4) now4 = Q[4][i4];
						else now4 = 0;
						if ((now0^now1^now2^now3^now4)==0) {
							cout << "Found" << endl;
							return 0;
						}
					}
				}
			} 
		}
	}
	cout << "Nothing" << endl;
	return 0;
}
