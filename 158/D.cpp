#include <bits/stdc++.h>

int main(int, char**) {
	std::string S;
	std::cin >> S;
	int Q;
	std::cin >> Q;
	int T;
	bool reverse = false;
	std::string L = "";
	std::string R = "";
	for (int i=0; i<Q; i++) {
		std::cin >> T;
		if (T == 1) {
			reverse = !reverse;
		} else {
			int F;
			std::string C;
			std::cin >> F >> C;
			bool flag = (F == 1 & !reverse) || (F == 2 & reverse);
			if (flag) {
				L = L + C;
			} else {
				R = R + C;
			}
		}
	}
	std::reverse(L.begin(), L.end());
	S = L + S + R;
	if (reverse) {
		std::reverse(S.begin(), S.end());
	}
	std::cout << S << std::endl;
	return 0;
}
