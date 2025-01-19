// N - Chef and Prime Divisors, Accepted
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
		while(__gcd(a,b) >1){
			b /= __gcd(a,b);
		}
		if(b>1) cout << "NO\n";
		else cout << "YES\n";
	}
}

/*
// N - Chef and Prime Divisors // tle, prime factorization method
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
		ll i=2;
		bool found=false;
		while(i<=b && !found){
			if(b%i==0){
				if(a%i) found=true;
				while(b%i==0 && !found) b/=i;
			}
			i++;			
		}
		if(found) cout << "NO\n";
		else cout << "YES\n";
	}
}

*/