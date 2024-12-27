// A. LCM Problem, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		int l, r;	
		cin >> l >> r;
		if(2*l>r){
			cout << -1 << " " << -1 << endl;
			continue;
		}
		cout << l << " " << 2*l << endl;
	}
}
