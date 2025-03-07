// K - Set Construction, Accepted
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
		cin>>n;
		map<int,set<int>> mp;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				char x;
				cin>>x;
				if(x=='0') mp[j].insert(j);
				else mp[j].insert(i);
			}
		}
		for(int i=1;i<=n;i++){
			cout<<mp[i].size()<<' ';
			for(auto &it:mp[i]) cout<<it<<' ';
			cout<<endl;
		}		
	}
}
