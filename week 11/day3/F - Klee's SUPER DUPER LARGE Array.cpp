//  F - Klee's SUPER DUPER LARGE Array, Accepted
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
		ll ans = LONG_MAX, l=1, r=n, mid;
		while(l<r){
			mid = l+(r-l)/2;
			ll seg1 = mid*k+(mid-1)*mid/2;
			ll seg2 = (n-mid)*k+(mid+n-1)*(n-mid)/2;
			if(seg1<seg2) l=mid+1;			
			else r=mid;			
		}
		ll cnt=(l*k+(l-1)*l/2)-((n-l)*k+(l+n-1)*(n-l)/2);		
		r=l+1;
		l--;
		ll lf=(l*k+(l-1)*l/2)-((n-l)*k+(l+n-1)*(n-l)/2);		
		ll rt=(r*k+(r-1)*r/2)-((n-r)*k+(r+n-1)*(n-r)/2);		
		ans=min({abs(cnt),abs(lf),abs(rt)});
		cout<<ans<<endl;		
	}
}

/*
// F - Klee's SUPER DUPER LARGE Array, wa
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
		ll l=1, r=2e9, p1, dif, ktomid, midton;
		while(l<=r){
			ll mid = l+(r-l)/2;
			ll prek = (k-1)*k/2;
			ll uptomid = (k+mid)*(k+mid+1)/2;
			ktomid = uptomid-prek;
			midton = (k+n-1)*(k+n)/2 - uptomid;
			if(uptomid<midton){
				l= mid+1;
				p1=mid;
				dif = midton-ktomid;
			}
			else{
				r= mid-1;
			}
		}
		ll op1 = dif;
		ll op2 = (ktomid+k+p1)-(midton-(k+p1));
		ll ans = min(op1, op2);
		cout << ans << endl;
	}
}
*/