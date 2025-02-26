// G - Haunted House, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		ll n;
		cin >> n;
		string s;
		cin >> s;
		reverse(s.begin(), s.end());				
		ll j=0, cnt=0;
		for(int k=0; k<n; k++){
			if(s[k]=='0'){
				cout << k-j+cnt << " ";
				cnt += k-j;
				j++;				
			}
		}
		for(int p=j+1; p<=n; p++){
			cout << -1 << " ";
		}
		cout << endl;
	}
}


/*
12
001011000110

0 2 4 6 10 15 20 -1 -1 -1 -1 -1 
*/