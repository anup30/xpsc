// I - Delete Two Elements, Accepted
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
		vector<ll> v(n);
		ll sum=0;
		for(int i=0; i<n; i++){
			cin >> v[i];
			sum += v[i];
		} 
		if((2*sum % n) != 0){
			cout << 0 << endl;
			continue;
		}
		map<ll, int> mp;
		ll cnt =0;
		for(ll x:v){
			ll aj = 2*sum/n - x;
			cnt += mp[aj];
			mp[x]++;
		}
		cout << cnt << endl;
	}
}
