// J - Final Boss, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		ll h, n;
		cin >> h >> n;
		vector<ll> a(n), c(n);
		for(int i=0; i<n; i++) cin >> a[i];
		for(int i=0; i<n; i++) cin >> c[i];
		ll l=1, r= 1e12, ans=0;
		while(l<=r){
			ll mid = l+(r-l)/2;
			ll damage=0;
			for(int i=0; i<n; i++){
				ll attack = (mid+c[i]-1)/c[i];
				damage += attack*a[i];
				if(damage>=h) break;
			}
			if(damage>=h){
				ans=mid;
				r=mid-1;
			}
			else{
				l=mid+1;
			}
		}
		cout << ans << endl;
	}
}
