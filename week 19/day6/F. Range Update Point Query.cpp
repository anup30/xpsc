// F. Range Update Point Query
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		int n, q; cin >> n >> q;
		vector<int> a(n);
		set<int> s;
		for(int i = 0; i < n; ++i) {
			cin >> a[i];
			if(a[i] > 9) s.insert(i);
		}
		while(q--) {
			int type; cin >> type;
			if(type == 1) {
				int l, r; 
				cin >> l >> r; --l, --r;
				int lst = l;
				while(!s.empty()) {
					auto it = s.lower_bound(lst);
					if(it == s.end() || *it > r) break;
					int num= a[*it], res=0;
					while(num){
						res+= num%10;
						num/=10;
					}
					a[*it] = res;
					int paiu = *it;
					s.erase(it);
					if(a[paiu] > 9) s.insert(paiu);
					lst = paiu + 1;
				}
			} 
			else {
				int x; 
				cin >> x; 				
				cout << a[x-1] << endl;
			}
		}		
	}
}
