// B. Collatz Conjecture, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	bool b;
	while (tc--){
		ll x, y, k, cur=0;	
		cin >> x >> y >> k;
		b= true;
		while(cur<k){
			if(x==1){
				cout << 1 + (k-cur)%(y-1) << endl;
				b=false;
				break;
			}
			ll n= y-(x%y);
			if(cur+n>k){
				if (b) cout << x+(k-cur) << endl;
				b=false;
				break;
			}
			cur += n;
			x+=n;
			while(x%y==0) x/= y;
		}
		if(b) cout << x << endl;
	}
}
