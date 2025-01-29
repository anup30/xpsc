// B - Two TVs, Accepted
// difference array

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int n=1, l, r;
	cin >> n;
	vector<pair<ll, ll>> pa;
	for(int i=0; i<n; i++){
		cin >> l >> r;
		pa.push_back({l,1});
		pa.push_back({r+1,-1});
	}
	sort(pa.begin(), pa.end());
	int cnt=0;
	string ans = "YES\n";
	for(int i=0; i<2*n; i++){
		cnt += pa[i].second;
		if(cnt>2){
			ans="NO\n";
			break;
		}
	}
	cout << ans;
}
