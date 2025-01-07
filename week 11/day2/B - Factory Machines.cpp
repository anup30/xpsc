// B - Factory Machines, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);		
	
	ll n, k;
	cin >> n >> k;
	vector<ll> v(n);
	for(int i=0; i<n; i++) cin >> v[i];
	sort(v.begin(), v.end());
	ll l=1, r=v[0]*k, ans=-1;
	while(l<=r){
		ll mid = l +(r-l)/2, sum=0;
		for(int i=0; i<n; i++){
			sum += mid/v[i];
		}
		if(sum>=k){
			ans=mid;
			r= mid-1;
		}
		else{
			l=mid+1;
		}
	}
	cout << ans << endl;	
}

/*
3 7
3 2 5

8
*/