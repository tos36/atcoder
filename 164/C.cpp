#include <bits/stdc++.h>

int main(int, char**) {
	int N;
	std::cin >> N;
	std::set<std::string> keihin;
	for (int i=0; i<N; i++) {
		std::string s;
		std::cin >> s;
		keihin.insert(s);
	}
	std::cout << keihin.size() << std::endl;
	return 0;
}
