// Exponentiation, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		ll a, b;
		cin >> a >> b;
		ll mod = 1e9+7; // <-
		ll ans=1;
		while(b){ // technique: https://www.geeksforgeeks.org/binary-exponentiation-for-competitive-programming/
			if(b&1) ans = ans = (a*ans)%mod; // if b is odd
			a= (a*a)%mod;
			b = (b>>1);
		}
		cout << ans << endl;		
	}
}

/*
Input:
3
3 4
2 8
123 123

Output:
81
256
921450052
*/