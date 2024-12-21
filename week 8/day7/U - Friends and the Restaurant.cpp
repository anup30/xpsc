// U - Friends and the Restaurant, Accepted
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
		vector<ll> x(n), y(n), a(n);
		for(int i=0; i<n; i++) cin >> x[i];
		for(int i=0; i<n; i++) cin >> y[i];
		for(int i=0; i<n; i++) a[i] = y[i]-x[i];
		sort(a.begin(), a.end(), greater<ll>());
		ll ans=0;
		int l=0, r=n-1;
		while(l<r){
			if(a[l]>-1 && a[r]>-1){
				ans++;
				l++;
				r--;
			}
			else if(a[l]<0 && a[r]<0) break;
			else if(a[l]>-1){
				if(a[l]>=abs(a[r])){
					ans++;
					l++;
					r--;
				}
				else r--;
			} 
		}	
		cout << ans << endl;	
	}	
}
