// L - Kefa and Park, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<vector<ll>> adj;

void dfs(ll src, ll par, vector<ll> &cat, ll m, ll cur, ll &cnt){
	if(cat[src]==1) cur++;
	else cur=0;
	if(cur>m) return;
	if(src !=1 && adj[src].size()==1){ // is leaf
		cnt++;
		return;
	}
	for(auto x:adj[src]){ // recursive
		if(x==par) continue;
		dfs(x,src,cat,m,cur,cnt);
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);		
	
	int n, m;
	cin >> n >> m;
	vector<ll> cat(n+1);
	for(int i=1; i<=n; i++) cin >> cat[i];
	adj.resize(n+1);
	ll u, v;		
	for(int i=1; i<=n-1; i++){			
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	ll cnt=0;
	dfs(1,0,cat,m,0,cnt);
	cout << cnt << endl;	
	
}
