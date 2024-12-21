// S - 2-Letter Strings, Accepted
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
		vector<string> v(n);
		for(int i=0; i<n; i++) cin >> v[i];
		map<string, ll> mp;
		ll ans=0;
		for(int i=0; i<n; i++){
			string tmp = v[i];
			for(char c='a'; c<='k'; c++){
				if(c != v[i][0]){
					tmp[0] = c;
					ans += mp[tmp];
				}				
			}
			tmp = v[i];
			for(char c='a'; c<='k'; c++){
				if(c != v[i][1]){
					tmp[1] = c;
					ans += mp[tmp];
				}				
			}
			mp[v[i]]++;
		}		
		cout << ans << endl;
	}	
}
