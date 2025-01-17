// H - We Were Both Children, Accepted
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
		vector<int> freq(n+1, 0), frogs(n+1,0);
		for(int i=0; i<n; i++){
			if(v[i]<=n) freq[v[i]]++;
		}
		
		for(int i=1; i<=n; i++){
			for(int j=i; j<=n; j+=i){
				frogs[j] += freq[i];
				
			}
		}
		int ans=0;
		for(int i=1; i<=n; i++){
			ans = max(ans, frogs[i]);
		}
		cout << ans << endl;
	}
}
