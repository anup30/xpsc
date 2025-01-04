// E. Scuza, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		int n, q, x;
		cin >> n >> q;		
		vector<int> m(n+1);
		m[0]=0;
		vector<ll> psum(n+1);
		psum[0] = 0;
		for(int i=1; i<=n; i++){
			cin >> x;
			m[i] = max(m[i-1], x);
			psum[i] = psum[i-1]+x;		
		}
		while(q--){
			cin >> x;
			auto it = upper_bound(m.begin(), m.end(), x);
			int sz = it - m.begin()-1;
			cout << psum[sz] << " ";
		}
		cout << endl;		
	}
}

/*
3
4 5
1 2 1 5
1 2 4 9 10
2 2
1 1
0 1
3 1
1000000000 1000000000 1000000000
1000000000

1 4 4 9 9 
0 2 
3000000000
*/