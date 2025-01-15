// A - Counting Divisors, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		int n, i;
		cin >> n;
		ll cnt=0;
		for(i=1; i*i<=n; i++){
			if(n%i==0){
				cnt+=2;
				if(i==sqrt(n)) cnt--;
			} 						
		}
		cout << cnt << endl;
	}
}
