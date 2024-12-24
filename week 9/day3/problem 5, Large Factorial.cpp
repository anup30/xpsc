// Large Factorial, Accepted
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
		ll mod = 1e9 +7; // <-
		ll ans = 1;
		for(ll i=1; i<=n; i++){
			ans = (i*ans)%mod;			
		}
		cout << ans << endl;
	}
}
