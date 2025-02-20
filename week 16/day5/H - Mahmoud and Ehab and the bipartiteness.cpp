// H - Mahmoud and Ehab and the bipartiteness, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

void dfs(int node, vector<vector<int>> &adj, ll &p, vector<int> &vis, bool cur){
	vis[node]=1;
	if(cur) p++;
	for(auto x: adj[node]){
		if(!vis[x]){
			dfs(x, adj, p, vis, (cur^1));
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n, u, v;
	cin >> n;
	vector<vector<int>> adj(n+1);
	for(int i=0; i<n-1; i++){		
		cin >> u >> v;		
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	vector<int> vis(n+1,0);
	ll p=0;
	dfs(u, adj, p, vis, true);
	ll ans= p*(n-p)-(n-1);
	cout << ans << endl;
}
