// B. Worms, Accepted
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
	vector<ll> psum(n+1,0);
	for(int i=1; i<=n; i++) psum[i] = psum[i-1]+ v[i-1];
	cin >> q;
	while(q--){
		int a;
		cin >> a;
		auto it = lower_bound(psum.begin(), psum.end(), a);
		cout << it - psum.begin() << endl;
	}	
}