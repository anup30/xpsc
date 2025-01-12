// K - Ice Cream Balls, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		ll n;
		cin >> n;
		ll l=0, r=2e9, ans=0;
		while(l<=r){
			ll mid = l+(r-l)/2;
			ll cur = (mid-1)*mid/2;
			if(cur>=n){
				r= mid-1;
				ans=mid;
			}
			else{
				l=mid+1;
			}			
		}
		ll now = (ans-1)*ans/2;
		if(now==n) cout << ans << endl;
		else{
			ans--;
			now = (ans-1)*ans/2;
			ans += (n-now);
			cout << ans << endl;
		}
	}
}

/*
5
1
3
6
179
1000000000000000000

2
3
4
27
2648956421
*/