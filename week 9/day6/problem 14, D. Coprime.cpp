// D. Coprime, Accepted
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
		ll mx=0;
		cin >> n;
		map<ll, ll> mp;
		vector<ll> v(n);
		for(int i=0; i<n; i++){
			cin >> v[i];
			mp[v[i]] = i+1;
		}
		for(auto a:mp){
			for(auto b:mp){
				if(__gcd(a.first, b.first)==1){
					mx = max(mx, a.second+b.second);
				}
			}
		}
		if(mx>0) cout << mx << endl;
		else cout << -1 << endl;
	}
}
