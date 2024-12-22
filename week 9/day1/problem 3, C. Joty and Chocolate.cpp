// C. Joty and Chocolate, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	ll n, a, b, p, q;
	cin >> n >> a >> b >> p >> q;
	ll a1=a, b1=b, tmp, gcd, lcm;
	while(b1 !=0){
		tmp = b1;
		b1 = a1%b1;
		a1=tmp;
	}
	gcd= a1; // gcd of 2 numbers calculation
	lcm = (a*b)/gcd; // lcm of 2 numbers calculation
	ll nlcm = n/lcm;
	ll na = n/a;
	ll nb = n/b;
	ll cnt = (na-nlcm)*p + (nb-nlcm)*q;
	if(p>=q) cnt += nlcm*p;
	else cnt += nlcm*q;
	cout << cnt << endl;
}
