// N - Air Conditioners, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		int n, k;
		ll inf=1e10;
		cin >> n >> k;
		vector<ll> a(k), t(k), ans(n, inf);
		for(int i=0; i<k; i++){
			cin >> a[i];
			a[i]--;
		} 
		for(int i=0; i<k; i++) cin >> t[i];
		for(int i=0; i<k; i++){
			ans[a[i]]= t[i];
		}
		for(int i=1; i<=n-1; i++){
			ans[i] = min(ans[i-1]+1, ans[i]);
		}
		for(int i=n-2; i>=0; i--){
			ans[i] = min(ans[i+1]+1, ans[i]);
		}
		for(int i=0; i<n; i++){
			cout << ans[i] << " ";
		}
		cout << endl;
	}
}
