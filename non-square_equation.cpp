#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

namespace WorkSpace {
	void Main() {
		long long N;
		scanf("%lld", &N);
		for (int i = 1; i <= 150; ++ i) {
			long long x = sqrt(i * i / 4 + N) - i / 2;
			long long _x = x;
			int sum = 0;
			while (_x) {
				sum += _x % 10, _x /= 10;
			}
			if (x * x + sum * x - N == 0) {
				printf("%lld\n", x);
				return ;
			}
		}
		puts("-1");
		return ;
	}
}
int main() {
	WorkSpace :: Main();
	return 0;
}