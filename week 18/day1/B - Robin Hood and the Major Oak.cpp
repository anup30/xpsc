// B - Robin Hood and the Major Oak, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		ll n, k;
		cin >> n >> k;
		ll p = n-k+1;
		ll res = (n*(n+1)/2) - (p*(p-1)/2);
		
		if(res%2==0) cout << "YES" << endl;
		else cout << "NO" << endl;	
	}
}

/*
5
1 1
2 1
2 2
3 2
4 4

NO
YES
NO
NO
YES

*/