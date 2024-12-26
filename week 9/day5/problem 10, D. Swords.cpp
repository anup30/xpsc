// D. Swords, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	ll n, mx=0;
	cin >> n;
	vector<ll> v(n);
	for(int i=0; i<n; i++){
		cin >> v[i];
		if(v[i]>mx) mx=v[i];
	} 
	ll sum=0, gcd=0;
	for(int i=0; i<n; i++){
		sum += (mx-v[i]);
		gcd = __gcd(gcd,(mx-v[i]));
	}
	ll y = (gcd==0? 0: sum/gcd);
	cout << y << " " << gcd << endl;
}

