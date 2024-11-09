// G - Chemistry, Accepted
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);	
	
	int t;
	cin >> t;
	while(t--){
		int n, k, odd=0;
		cin >> n >> k;
		string s;
		cin >> s;
		map<char, int> mp;
		for(int i=0; i<n; i++){
			mp[s[i]]++;
		}
		for(auto x:mp){
			if(x.second%2==1) odd++;			
		}
		if(odd-1 <= k) cout << "YES\n";
		else cout << "NO\n";
	}
}
/*
a: 10
b: 8
c: 3
d: 5
k= 
*/