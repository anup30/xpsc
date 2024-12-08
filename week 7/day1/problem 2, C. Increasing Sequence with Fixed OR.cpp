// C. Increasing Sequence with Fixed OR, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int tc;
	cin >> tc;
	while (tc--) {
		long long n;
		cin >> n;
		deque<ll> ans;
		for (int k = 0;k <= __lg(n);k++) {
			if ((n >> k) & 1) {
				long long value = n - (1LL << k);
				if (value > 0) {
					ans.push_front(value);
				}
			}
		}

		ans.push_back(n);
		cout << ans.size() << endl;
		for (ll x : ans) cout << x << " ";		
		cout << endl;
	}
}
