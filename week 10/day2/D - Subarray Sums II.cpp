// D - Subarray Sums II, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	ll n, k, j=0, cnt=0;
	cin >> n >> k;
	vector<ll> v(n);	
	vector<ll> psum(n+1, 0);
	map<ll, vector<ll>> mp;
	for(ll i=0; i<n; i++) cin >> v[i];
	mp[0].push_back(0); //
	for(ll i=1; i<=n; i++){
		psum[i] = psum[i-1]+v[i-1];
		mp[psum[i]].push_back(i);
	}
	for(ll i=0; i<=n; i++){
		ll target = k+ psum[i];
		auto it = mp.find(target);
		if(it != mp.end()){			
			auto pt = upper_bound(it->second.begin(), it->second.end(), i);
			cnt += (it->second.end()-pt);
		}
	}
	cout << cnt << endl;
}
 
/*
5 7
2 -1 3 5 -2
2
 
5 0
0 0 0 0 0
15
*/