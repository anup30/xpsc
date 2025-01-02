// 10474 - Where is the Marble?, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int n, q, tc=0, a;
	while(true){
		++tc;
		cin >> n >> q;
		if(n==0 && q==0) break;
		vector<int> v(n);
		for(int i=0; i<n; i++) cin >> v[i];
		sort(v.begin(), v.end());
		cout << "CASE# " << tc <<":\n";
		while(q--){
			cin >> a;
			auto it = lower_bound(v.begin(), v.end(), a);
			if(*it !=a) it=v.end();
			int ans = it-v.begin()+1;
			if(it == v.end()) cout << a << " not found\n";
			else cout << a << " found at " << ans << endl;
		}		
	}
}
