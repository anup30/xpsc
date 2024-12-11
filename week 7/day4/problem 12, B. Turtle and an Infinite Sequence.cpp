// B. Turtle and an Infinite Sequence, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		int n, m;
		cin >> n >> m;

		ll l = max(0, n - m), r = m + n;
		if (l == r) cout << l << endl;
		for (int i = 30; i >= 0; i--) {
			if ((r >> i & 1) && !(l >> i & 1))	{
				cout << (l | (ll)pow(2ll, i+1)-1) << endl;
				break;
			}
		}		
	}
}
