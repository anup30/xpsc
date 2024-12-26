// B. GCD Partition, Accepted
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
		vector<ll> v(n), psum(n+1);
		psum[0]=0;
		for(int i=0; i<n; i++){
			cin >> v[i];
			psum[i+1] = psum[i]+v[i];
		} 
		ll ans =1;
		for(int i=0; i<n-1; i++){
			ans = max(ans,__gcd(psum[i+1], psum[n]-psum[i+1]));
		}
		cout << ans << endl;
	}
}
