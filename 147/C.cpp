#include <bits/stdc++.h>
     
    using namespace std;
     
    typedef long long ll;
     
    ll MOD = 1000000007;
     
    bool check(int n, bitset<16> people, vector<vector<int>> s) {
    	for (int i=0; i<n; i++) {
    		int now = people[i];
            if (now==0) continue;
    		for (int j=0; j<n; j++) {
    			int op = people[j];
    			if (s[i][j]==-1) continue;
    			else if (s[i][j] == op) continue;
    			else return false;
    		}
    	}
    	return true;
    }
     
    int main(int, char**) {
    	int n; cin >> n;
    	vector<vector<int>> s(n, vector<int>(n, -1));
    	for (int i=0; i<n; i++) {
    		int a; cin >> a;
    		for (int j=0; j<a; j++) {
    			int x, y;
    			cin >> x >> y;
    			x--;
    			s[i][x] = y;
    		}
    	}
     
    	int ret = 0;
    	for (int bit=0; bit < (1<<n); ++bit){
    		bitset<16> people = bitset<16>(bit);
    		int cnt = people.count();
    		if (ret > cnt) continue;
    		if (check(n, people, s)) ret = max(cnt, ret);
    	}
    	cout << ret << endl;
    	return 0;
    }