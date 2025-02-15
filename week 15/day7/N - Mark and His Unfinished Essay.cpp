// N - Mark and His Unfinished Essay, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		int n, c, q;
		cin >> n >> c >> q;
		string s;
		cin >> s;
		vector<pair<ll,ll>> ops(c);
		vector<pair<ll,ll>> segs(c);
		ll cur_len=n;
		for(int i=0; i<c; i++){
			ll l, r;
			cin >> l >> r;
			ops[i] = {l,r};
			segs[i] = {cur_len+1, cur_len+(r-l+1)};
			cur_len=segs[i].second;
		}
		while(q--){
			ll k;
			cin >> k;
			if(k<=n){
				cout << s[k-1] << endl;
			}
			else{
				for(int i=c-1; i>=0; i--){
					if(k>=segs[i].first && k<=segs[i].second){
						k=(ops[i].first)+(k-segs[i].first);
					}
				}
				cout << s[k-1] << endl;
			}
		}
	}
}
