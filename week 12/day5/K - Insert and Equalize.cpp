// K - Insert and Equalize, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll gcd(ll a, ll b){ 
	return b == 0 ? a : gcd(b, a % b); 
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		int n;
		cin >> n;
		vector<ll> v(n);
		set<ll> st;
		for(int i=0; i<n; i++){
			cin >> v[i];			
		} 
		if(n==1){
			cout << "1\n";
			continue;
		}
		sort(v.begin(), v.end());
		if(v[0]<0){
			ll tmp = v[0];
			--tmp;
			tmp = -1LL*tmp;
			for(int i=0; i<n; i++) v[i] += tmp;			
		}
		for(int i=0; i<n; i++) st.insert(v[i]);
		ll x=0;
		for(int i=1; i<=n-1; i++){
			x = gcd(x, v[i]-v[i-1]);
		}
		//cout << "x= " << x << endl;
		ll mx = *st.rbegin();
		ll i=1, n1=0;
		while(true){					
			if(st.find(mx- i*x) == st.end()){
				n1 = mx- i*x;
				break;
			}			
			i++;
		}
		//cout << "n1= " << n1 << endl;
		ll ans=0;
		ans += (mx-n1)/x;
		for(int i=0; i<=n-1; i++){
			ans += (mx-v[i])/x;
		}
		cout << ans << endl;
	}
}

/*
3
3
1 2 3
5
1 -19 17 -3 -15
1
10

6
27
1
*/