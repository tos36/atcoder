#include <bits/stdc++.h>

int main(int, char**) {
	long long c = 0;
	std::string s;
	std::cin >> s;
	long long l = s.size();
	for (long long i=4; i<l+1; i++) {
		for (long long j=0; j<l-i+1; j++) {
			std::string sub = s.substr(j, i);
			long long sub_num = std::stoll(sub);
			if (sub_num%2019 == 0) {
				c++;
			}
		}
	}
	std::cout << c << std::endl;
	return 0;
}
