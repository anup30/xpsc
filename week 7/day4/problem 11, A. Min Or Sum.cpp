// A. Min Or Sum, Accepted
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
		int ans=0;
		for(int i=0; i<n; i++){
			ans = ans|v[i];
		}
		cout << ans <<endl;
	}
}
