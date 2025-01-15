// C - T-primes, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	ll n=1, x;
	cin >> n;
	int n2=1e6;
	vector<bool> prime(n2 + 1, true);
	for (int i = 2; i*i <= n2;i++) {
		if (prime[i]){
			for (int j= i+i; j<=n2; j+=i){
				prime[j] = false;
			}
		}
	}	
	while(n--){
		cin >> x;
		ll sr = sqrt(x);
		if(x<4){
			cout << "NO\n";
			continue;
		}
		if(sr*sr==x){
			if(prime[sr]) cout << "YES\n";
			else cout << "NO\n";
		}
		else cout << "NO\n";
	}
}

/*
3
4 5 6

YES
NO
NO
*/