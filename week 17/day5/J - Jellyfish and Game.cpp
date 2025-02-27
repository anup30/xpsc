// J - Jellyfish and Game, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		ll n, m, k;
		cin >> n >> m >> k;
		vector<ll> a(n), b(m);
		ll amn=1e12, amx=0, bmn=1e12, bmx=0;
		ll sum=0;
		for(int i=0; i<n; i++){
			cin >> a[i];
			amn= min(amn,a[i]);
			amx= max(amx,a[i]);
			sum += a[i];
		} 
		for(int i=0; i<m; i++){
			cin >> b[i];
			bmn= min(bmn,b[i]);
			bmx= max(bmx,b[i]);
		} 
		if(amn>bmx){
			if(k%2==1) cout << sum << endl;
			else cout << sum- amx +bmn << endl;
		}
		else{
			if(k%2==1) cout << sum-amn+bmx << endl;
			else cout << sum- max(amx, bmx) + min(amn, bmn) -amn+bmx << endl;
		}
	}
}
