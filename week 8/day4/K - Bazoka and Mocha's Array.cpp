// K - Bazoka and Mocha's Array, Accepted
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
		vector<int> v(n);
		for(int i=0; i<n; i++) cin >> v[i];
		int cnt = 1; // ascending segment count
		for(int i=1; i<n; i++) if(v[i]<v[i-1]) cnt++;
		if(cnt==1) cout << "YES\n";
		else if(cnt==2){
			if(v[0]>=v[n-1]) cout << "YES\n";
			else cout << "NO\n";
		}
		else if(cnt>2) cout << "NO\n";		
	}
}
