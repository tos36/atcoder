#include <bits/stdc++.h>

int main(int, char**) {
	std::string s;
	std::cin >> s;
	int l = s.size();
	std::map<int, int> mods;
	int prev = 0;
	int prev10 = 1;
	mods[0] = 1;
	for (int i=l; i>0; i--) {
		int digit = s.at(i - 1) - '0';
		int mod = (prev + prev10 * digit) % 2019;
		prev = mod;
		prev10 = prev10*10 % 2019;
		if (mods.count(mod)) {
			mods.at(mod)++;
		} else {
			mods[mod] = 1;
		}
	}
	int count = 0;
	for (auto x : mods) {
		int value = x.second;
		count += value * (value - 1) / 2;
	//	std::cout << x.first << " " << x.second << std::endl;
	}
	std::cout << count << std::endl;
	return 0;
}
