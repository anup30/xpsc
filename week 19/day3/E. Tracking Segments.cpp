// E. Tracking Segments, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		ll n, m; cin >> n >> m;
		vector<pair<ll, ll>> b(m);
		for (ll i = 0; i < m; ++i) {
			cin >> b[i].first >> b[i].second;
			b[i].first--;
		}
		ll q; cin >> q;
		vector<ll> t(q);
		for (ll i = 0; i < q; ++i) {
			cin >> t[i];
			t[i]--;
		}
		auto ok = [&](ll m) -> bool {
			vector<ll> a(n);
			for (ll i = 0; i < m; ++i) a[t[i]] = 1;			
			vector<ll> p(n + 1);
			for (ll i = 0; i < n; ++i) {
				p[i + 1] = p[i] + a[i];
			}
			for (auto e : b) if (p[e.second] - p[e.first] > (e.second - e.first) / 2) return 1;			
			return 0;
		};
		ll l = 0, r = q;
		while (r - l > 1) {
			ll m = (l + r) / 2;
			if (ok(m)) r = m;			
			else l = m;			
		}
		if (!ok(r)) cout << -1 << endl;		
		else cout << r << endl;						
	}
}
