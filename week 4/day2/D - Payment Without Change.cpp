// D - Payment Without Change, Accepted
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);	
	
	int t=1;
	cin >> t;
	while(t--){
		ll a, b, n, s;
		cin >> a >> b >> n >> s;		
		ll cur = s - s%n;
		ll i= cur/n;		
		if(i>a) cur = a*n;		
		if(s- cur <= b) cout << "YES\n";
		else cout << "NO\n";			
	}
}

/*
4
1 2 3 4
1 2 3 6
5 2 6 27
3 3 5 18
*/

/*
YES
NO
NO
YES
*/