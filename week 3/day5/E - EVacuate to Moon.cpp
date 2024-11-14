// E - EVacuate to Moon, Accepted
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t;
	cin >> t;
	while(t--){
		ll n, m, h;
		cin >> n >> m >> h;
		vector<ll> vn(n);
		vector<ll> vm(m);
		for(int i=0; i<n; i++) cin >> vn[i];
		for(int i=0; i<m; i++) cin >> vm[i];
		sort(vn.begin(), vn.end(), greater<int>());
		sort(vm.begin(), vm.end(), greater<int>());
		ll ans = 0;
		for(int i=0; i<n && i<m; i++){
			ans += min({vn[i], h*vm[i]});
		}
		cout << ans << endl;
	}	
	
}