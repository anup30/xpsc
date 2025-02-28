// K - Colorful Table, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		int n, k; 
		cin >> n >> k;
		vector<int> a(n);
		map<int, bool> mp;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			mp[a[i]] = 1;
		}
		vector<pair<int, int>> pos(k + 1, {1e9, -1});
		for (int i = 0; i < n; i++) {
			pos[a[i]] = {min(pos[a[i]].first, i), max(pos[a[i]].second, i)};
		}
		int mx = *max_element(a.begin(), a.end()), mn = *min_element(a.begin(), a.end());
		for (int i = mx - 1; i >= mn; i--) {
			pos[i] = {min(pos[i].first, pos[i + 1].first), max(pos[i].second, pos[i + 1].second)};
		}
		vector<int> ans(k + 1, 0);
		for (int i = 1; i <= k; i++) {
			ans[i] = 2 * (pos[i].second - pos[i].first + 1);
			if (!mp[i]) ans[i] = 0;
		}
		for (int i = 1; i <= k; i++) 
			cout << ans[i] << " ";
		cout << endl;
	}
}
