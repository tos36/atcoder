#include <bits/stdc++.h>

using namespace std;

int main(int, char**) {
	int a, b, h, m;
	cin >> a >> b >> h >> m;
	static const double pi = 3.141592653589793;
	double th_a = pi / 6 * (h + m/60.0);
	double th_b = pi * 2 * m / 60.0;
	double x_a, y_a, x_b, y_b;
	x_a = a * cos(th_a);
	y_a = a * sin(th_a);
	x_b = b * cos(th_b);
	y_b = b * sin(th_b);
	double l2, l;
	l2 = pow(x_a-x_b, 2) + pow(y_a-y_b, 2);
	l = pow(l2, 0.5);
	cout << setprecision(20) << l << endl;
	return 0;
}
