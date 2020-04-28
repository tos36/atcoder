#include <bits/stdc++.h>

int main(int, char**) {
	int64_t N;
	std::cin >> N;
	int64_t sum = 0;
	for (int i=1; i<N+1; i++) {
		if ( i%3!=0 && i%5!=0) {
			sum += i;
		}
	}
	std::cout << sum << std::endl;
	return 0;
}
