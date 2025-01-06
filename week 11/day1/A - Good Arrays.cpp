// A - Good Arrays, Accepted
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
		ll one=0, cnt=0;
		cin >> n;
		vector<int> v(n);
		for(int i=0; i<n; i++){
			cin >> v[i];
			if(v[i]==1) one++;
			else cnt += v[i]-1;
		} 
		if(n==1){
			cout << "NO\n";
			continue;
		}
		if(one>cnt) cout << "NO\n";
		else cout << "YES\n";
	}
}
