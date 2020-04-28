#include <bits/stdc++.h>

int main(int, char**) {
	int N;
	std::string S;
	std::cin >> N;
	std::cin >> S;
	int64_t r = 0;
	int64_t g = 0;
	int64_t b = 0;
	for (int i=0; i<N; i++) {
		if( S.at(i) == 'R') {
			r += 1;
		} else if (S.at(i) == 'G') {
			g += 1;
		} else {
			b += 1;
		}
	}
	int64_t sum = r * g * b;
	//std::cout << sum << std::endl;

	for (int i=0; i<N-2; i++) {
		char a = S.at(i);
		for (int j=i+1; j<N-1; j++) {
			char b = S.at(j);
			if (a == b) continue;
			int k = 2*j - i;
			if (k >= N) continue;
			if ((b != S.at(k)) && (a != S.at(k))){
				sum -= 1;
			} else {
				continue;
			}
		}
	}
	std::cout << sum << std::endl;
	return 0;
}
