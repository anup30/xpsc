// D. Fast search, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n, q;
	cin >> n;
	vector<int> v(n);
	for(int i=0; i<n; i++) cin >> v[i];
	sort(v.begin(), v.end());
	cin >> q;
	while(q--){
		int a, b;
		cin >> a >> b;
		auto ita = lower_bound(v.begin(), v.end(), a);
		auto itb = upper_bound(v.begin(), v.end(), b);
		if(ita== v.end()) cout << 0 << endl;		
		else cout << itb-ita << endl;		
	}
}