// I - Districts Connection, Accepted
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
		vector<int> v(n);		
		map<int, vector<int>> mp;
		for(int i=0; i<n; i++){
			cin >> v[i];			
			mp[v[i]].push_back(i+1);
		} 
		int sz=mp.size();
		if(sz==1){
			cout << "NO" << endl;
			continue;
		}
		cout << "YES" << endl;
		vector<vector<int>> vv;
		for(auto x:mp) vv.push_back(x.second);
		
		for(int i=1; i<sz; i++){
			for(auto x:vv[i]) cout << vv[0][0] << " " << x << endl;
		}
		for(int i=1; i<vv[0].size(); i++){
			cout << vv[1][0] << " " << vv[0][i] << endl;
		}
	}
}
