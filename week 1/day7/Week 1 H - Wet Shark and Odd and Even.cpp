// H - Wet Shark and Odd and Even. Accepted

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	ll n, sodd= 1e9 +1, sum = 0;
	cin >> n;
	vector<ll> v(n);
	for(int i=0; i<n; i++){
		cin >> v[i];
		sum += v[i];
		if(v[i]%2==1 && v[i]<sodd) sodd = v[i];		
	}
	if(sum%2==1) sum -= sodd;
	cout << sum << endl; 
}
