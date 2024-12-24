// D. Taxes, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool is_prime(ll n){
	bool b= true;
	ll sr = sqrt(n);
	for(ll i=2; i<=sr; i++){
		if(n%i==0){
			b= false;
			break;
		}
	}
	return b;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	//cin >> tc;
	while (tc--){
		ll n;
		cin >> n;
		if(is_prime(n)==true) cout << 1 << endl;
		else if(n%2==0) cout << 2 << endl; // evens are sum of 2 primes. Goldbach's conjecture
		else if(n%2==1 && is_prime(n-2)==true) cout << 2 << endl; //
		else cout << 3 << endl;
	}
}
