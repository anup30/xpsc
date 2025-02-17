// C - Queen, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int n;
	cin >> n;
	map<int, vector<int>> mp;
	map<int, bool> sig;
	int u, v;
	for(int i=1; i<=n; i++){
		cin >> u >> v;
		mp[u].push_back(i);
		if(v) sig[i]=true;		
	}
	vector<int> ans;
	for(auto i:sig){
		bool b=true;
		for(auto x: mp[i.first]){ //
			if(sig.count(x)==0){
				b=false;
				break;
			}
		}
		if(b) ans.push_back(i.first);
	}
	
	if(ans.size()==0){
		cout << -1 << endl;
	}
	else{
		sort(ans.begin(), ans.end());
		for(auto i:ans) cout << i << " ";
		cout << endl;
	}	
}
