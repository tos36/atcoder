#include <bits/stdc++.h>

int main(int, char**) {
	int64_t c = 0;
	int64_t num;
	std::cin >> num;
	std::string s = std::to_string(num);
	int64_t M = num/2019;
	for (int64_t i=1; i<M+1; i++) {
		int64_t check = 2019 * i;
		std::string check_s = std::to_string(check);
		//std::cout << check_s + ' ' + s << std::endl;
		if (s.find(check_s) != std::string::npos) c++;
	}
	std::cout << c << std::endl;
	return 0;
}
