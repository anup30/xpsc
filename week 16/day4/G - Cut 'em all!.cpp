// G - Cut 'em all!, Accepted
#include<bits/stdc++.h>
using namespace std;

const int mx = 1e5 + 10;
vector <int> adj[mx];
bool vis[mx];
int keep[mx], ans, sz[mx];

void dfs(int v){
	vis[v] = true;
	for(int i = 0; i < adj[v].size(); i++){
		int u = adj[v][i];
		if(!vis[u]){
			dfs(u);
			sz[v] += keep[u];
		}
	}
	if(sz[v] % 2 == 0) keep[v] = sz[v] + 1;    
	else ans += sz[v];    
	return;
}

int main(){
	int n;
	cin >> n;
	int n2=n-1;
	while(n2--){
		int a, b;
		cin >> a >> b;
		a--; 
		b--;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}    
	if(n%2){
		cout << -1 << endl;
		return 0;
	}
	dfs(0);
	cout << n-ans-1  << endl;
}