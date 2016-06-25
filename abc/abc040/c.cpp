#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i=0;i<(n);i++)

int main() {
	int N;
	cin >> N;
	int A[N];
	int dp[N] = {0};
	rep(i, N) cin >> A[i];
	if (N <= 3) {
		cout << abs(A[0] - A[N-1]) << endl;
		return 0;
	}
	dp[1] = abs(A[0] - A[1]);
	for (int i=2;i<N;i++) {
		int s = dp[i-2] + abs(A[i-2] - A[i]);
		int t = dp[i-1] + abs(A[i-1] - A[i]);
		dp[i] = min(t, s);
	}
	cout << dp[N-1] << endl;
	return 0;
}
