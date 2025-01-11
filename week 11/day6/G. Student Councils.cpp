// G. Student Councils, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int k, n;
	cin >> k >> n;
	vector<ll> v(n);
	for(int i=0; i<n; i++) cin >> v[i];
	ll l=0, r=1e12, ans=0;
	while(l<=r){
		ll mid = l+(r-l)/2, sum=0;
		for(int i=0; i<n; i++) sum += min(mid, v[i]);
		if(sum>= mid*k){
			ans=mid;
			l=mid+1;
		}
		else{
			r=mid-1;
		}
	}
	cout << ans << endl;
}
