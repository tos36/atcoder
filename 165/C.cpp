#include <bits/stdc++.h>

using namespace std;

int main(int, char**) {
	int n, m, q;
	cin >> n >> m >> q;
	vector<vector<int>> data(q, vector<int>(4));
	for (int i=0; i<q; i++) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		a--; b--;
		data[i][0] = a;
		data[i][1] = b;
		data[i][2] = c;
		data[i][3] = d;
	}
	long long max_score = 0;
	for (int i1=1; i1<=m; i1++) {
	 for (int i2=i1; i2<=m; i2++) {
	  for (int i3=i2; i3<=m; i3++) {
	   for (int i4=i3; i4<=m; i4++) {
	    for (int i5=i4; i5<=m; i5++) {
	     for (int i6=i5; i6<=m; i6++) {
	      for (int i7=i6; i7<=m; i7++) {
	       for (int i8=i7; i8<=m; i8++) {
	        for (int i9=i8; i9<=m; i9++) {
		 for (int i10=i9; i10<=m; i10++) {
			 vector<int> nums = {i1, i2, i3, i4, i5, i6, i7, i8, i9, i10};
			 long long tmp = 0;
			 for (auto d : data) {
				 if (nums[d[1]] - nums[d[0]] == d[2]) tmp += d[3];
			 }
			 max_score = max(max_score, tmp);
		 }
		}
	       }
	      }
	     }
	    }
	   }
	  }
	 }
	}
	cout << max_score << endl;

	return 0;
}
