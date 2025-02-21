// K - Apple Tree, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<vector<int>> adj;
vector<int> val;

int dfs(int at, int from){
	int count=0;
	for(auto child: adj[at]){
		if(child!=from){
			count+=dfs(child,at);
		}
	}
	if(count==0 && adj[at].size()==1){
		count++;
	}
	val[at]=count;
	return count;
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		int n;
		cin >> n;
		adj.resize(n+1);
		val.resize(n+1,0);
		int u, v;
		for(int i=1; i<=n-1; i++){
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		dfs(1,1);
		int q;
		cin >> q;
		for(int i=1; i<=q; i++){
			cin >> u >> v;
			ll ans = (ll)val[u]*(ll)val[v];
			cout << ans << endl;
		}
		adj.clear();
		val.clear();
	}
}
