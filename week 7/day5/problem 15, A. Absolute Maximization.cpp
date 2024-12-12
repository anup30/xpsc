// A. Absolute Maximization, Accepted
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
		int mx = v[0];
		int mn = v[0];
		for(int i=1; i<n; i++){
			mx = (mx | v[i]);
			mn = (mn & v[i]);
		} 
		cout << mx -mn << endl;
	}
}
