#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i=0;i<(n);i++)

int main() {
	long A,B,K,L;
	cin >> A >> B >> K >> L;
	cout << min(K/L*B + K%L*A, (K/L+1)*B) << endl;
	return 0;
}
