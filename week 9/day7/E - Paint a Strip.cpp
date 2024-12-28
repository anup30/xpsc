// E - Paint a Strip, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		int n;
		cin >> n;
		if(n<=2){
			cout << n << endl;
			continue;
		}
		ll cur =2, sum=4;
		while(n>sum){
			cur++;
			sum = sum*2+2;
		}	
		cout << cur << endl;	
	}
}
