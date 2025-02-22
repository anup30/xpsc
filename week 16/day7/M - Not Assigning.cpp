// M - Not Assigning
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		int n;
		cin >> n;
		vector<vector<int>> adj(n + 1);
		map<pair<int, int>, int> mp;
		vector<int> ar(n + 1, 0);
		
		for (int i = 0; i < n - 1; i++) {
			int u, v;
			cin >> u >> v;
			ar[u]++;
			ar[v]++;
			adj[u].push_back(v);
			adj[v].push_back(u);
			mp[{u, v}] = i + 1;
			mp[{v, u}] = i + 1;
		}
		
		int idx = -1;
		bool b=false;
		for (int i = 1; i <= n; i++) {
			if (ar[i] == 1) idx = i;
			if (ar[i] > 2) {
				b=true;
				break;
			}
		}
		
		if (b) {
			cout << -1 << endl;
			continue;
		}
		// bfs
		vector<int> ans(n + 1, 0);
		vector<bool> vis(n + 1, false);
		queue<int> q;
		q.push(idx);
		int val = 2;
		vis[idx] = true;
		
		while (!q.empty()) {
			int node = q.front();
			q.pop();
			for (int i : adj[node]) {
				if (!vis[i]) {
					ans[mp[{node, i}]] = val;
					q.push(i);
					val = (val == 2) ? 3 : 2;
					vis[i] = true;
				}
			}
		}		
		for (int i = 1; i < n; i++) cout << ans[i] << " ";		
		cout << endl;		
	}
}
