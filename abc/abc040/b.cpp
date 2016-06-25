#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, ans = 100000;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n / i; j++) {
			int s = i * j;
			if (s <= n) {
				int t = abs(i - j) + n - s;
				ans = min(t, ans);
			}
		}
	}
	cout << ans << endl;
	return 0;
}
