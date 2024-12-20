// P - Luntik and Subsequences, Accepted
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
		vector<ll> v(n);
		ll zero=0, one=0;
		for(int i=0; i<n; i++){
			cin >> v[i];
			if(v[i]==0) zero++;
			else if(v[i]==1) one++;			
		}	
		cout << (1ll << zero) * (ll)one << endl;
	}
}

/*
5
5
1 2 3 4 5
2
1000 1000
2
1 0
5
3 0 2 1 1
5
2 1 0 3 0

1
0
2
4
4
*/