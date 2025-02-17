// B - Forever Winter, Accepted
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
		map<int, vector<int>> mp;
		int u, v;
		for(int i=0; i<m; i++){
			cin >> u >> v;
			mp[u].push_back(v);
			mp[v].push_back(u);
		}
		int x=0, y=0;
		auto it= mp.begin();
		while(it != mp.end()){
			if(it->second.size() == 1){
				int p = it->second[0];
				y= mp[p].size()-1;
				//auto it2= mp[p].begin();
				for(auto pt:mp[p]){
					if(mp[pt].size() != 1){
						x= mp[pt].size(); //
					}
				}
			}
			if(x>0 && y>0) break;
			it++;
		}
		cout << x << " " << y << endl;
	}
}
