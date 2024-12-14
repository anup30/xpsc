// C. Bitwise Balancing, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int tc = 1;
	cin >> tc;
	while (tc--) {
		ll a = 0, b, c, d;
		cin >> b >> c >> d;
		for (ll i = 0; i < 64; i++) {
			ll a1 = (1LL << i);
			ll b1 = (a1 & b) ? a1 : 0LL;
			ll c1 = (a1 & c) ? a1 : 0LL;
			ll d1 = (a1 & d) ? a1 : 0LL;
			if ((a1 | b1) == d1 + (a1 & c1)) a += a1;
		}
		if ((a | b) == (d + (a & c))) cout << a << endl;
		else cout << -1 << endl;
	}
}

/*
3
2 2 2
4 2 6
10 2 14

0
-1
12
*/
