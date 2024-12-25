// B. Relatively Prime Pairs, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	//cin >> tc;
	while (tc--){
		ll l, r;
		cin >> l >> r;
		cout << "YES" << endl;
		for(ll i=l; i<r; i+=2){
			cout << i << " " << i+1 << endl;
		}
	}
}
