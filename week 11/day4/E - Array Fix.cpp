// E - Array Fix, Accepted
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
		int last = v[n-1];
		bool b = true;
		for(int i=n-2; i>=0; i--){
			int m = v[i]%10;
			int d = v[i]/10;
			if(v[i]<= last) last = v[i];
			else if(m>last || d>m){
				b=false;
				break;
			}
			else{
				last = d;
			}			
		}
		if(b) cout << "YES\n";
		else cout << "NO\n";
	}
}
