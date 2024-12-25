// C. Fadi and LCM, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll lcm(ll a, ll b){
	return a*b/__gcd(a,b); // a*b = gcd*lcm
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	//cin >> tc;
	while (tc--){
		ll x;
		cin >> x;		
		ll n1=x, n2=1;
		for(ll i=sqrt(x);i>=1; i--){
			if(x%i==0 && lcm(i, x/i)==x){
				n1 = i;
				n2= x/n1;
				break;
			}
		}
		cout << n1 << " " << n2 << endl;
	}
}
