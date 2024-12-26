// C. Non-coprime Split, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		int l, r;
		cin >> l >> r;
		bool b = false;
		for(int i=l; i<=r; i++){
			for(int j=2; j<=sqrt(i); j++){
				if(i%j==0){
					cout << j << " " << i-j << endl; // gcd(a,b) == gcd(a, b-a)
 					b=true;
					break;
				}
			}
			if(b) break;
		}
		if(!b) cout << -1 << endl;	
	}
}
