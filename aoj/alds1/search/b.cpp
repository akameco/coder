#include <bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i=0;i<(n);i++)

int n,q,c=0;
int S[1000000], T[1000000];

int bs(int key) {
	int l=0,r=n,mid;
	while (l < r) {
		mid = (l+r) / 2;
		if (S[mid] == key) return 1;
		else if(key < S[mid]) r = mid;
		else l = mid + 1;
	}
	return 0;
}

int main() {
	cin >> n;
	rep(i,n) cin >> S[i];
	cin >> q;
	rep(i,q) cin >> T[i];
	rep(i,q) {
		c += bs(T[i]);
	}
	cout << c << endl;
	return 0;
}
