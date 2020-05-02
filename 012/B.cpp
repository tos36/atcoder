#include <bits/stdc++.h>

using namespace std;

int main(int, char**) {
	int h1, h2, m1, m2, s1, s2;
	int N;
	cin >> N;
	int h, m, s;
	if (N >= 24 * 60 * 60 - 1) {
		h = 23;
		m = 59;
		s = 59;
	} else {
		h = N/3600;
		m = (N%3600)/60;
		s = (N%3600)%60;
	}
	h1 = h/10;
	h2 = h - h1 * 10;
	s1 = s/10;
	s2 = s - s1 * 10;
	m1 = m/10;
	m2 = m - m1 * 10;
	cout << h1 << h2 << ':' << m1 << m2 << ':' << s1 << s2 << endl;
	return 0;
}
