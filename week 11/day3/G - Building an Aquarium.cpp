// G - Building an Aquarium, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		ll n, k;
		cin >> n >> k;
		vector<ll> v(n);
		for(int i=0; i<n; i++) cin >> v[i];
		ll l=0, r=2e9, ans=0;
		while(l<=r){
			ll mid = l+(r-l)/2; //
			ll sum=0;
			for(int i=0; i<n; i++)
				if(mid>v[i]) sum += mid-v[i];
			if(sum<=k){
				ans= mid;
				l=mid+1;
			} 
			else r=mid-1;			
		}
		cout << ans << endl;
	}
}

/*
5
7 9
3 1 2 4 6 2 5
3 10
1 1 1
4 1
1 4 3 4
6 1984
2 6 5 9 1 8
1 1000000000
1

4
4
2
335
1000000001
*/