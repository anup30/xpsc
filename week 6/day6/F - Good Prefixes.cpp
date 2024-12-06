// F - Good Prefixes, Accepted
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
		vector<ll> v(n), a;
		for(int i=0; i<n; i++) cin >> v[i];
		ll cnt=0, cum=0, mx=0;
		int i=0;
		a.push_back(v[i]);
		cum += a[i];
		mx=a[i];
		while(i<n){			
			if(2*mx==cum) cnt++;
			i++;
			if(i<n){
				a.push_back(v[i]);
				cum += a[i];
				mx = max(mx, a[i]);				
			}			
		}
		cout << cnt << endl;
	}
}
