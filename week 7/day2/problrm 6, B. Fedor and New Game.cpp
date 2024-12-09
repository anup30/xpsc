// B. Fedor and New Game, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int n, m, k;
	cin >> n >> m >> k;	
	vector<int> v(m+1);
	vector<bool> b(n);
	for(int i=0; i<m+1; i++) cin >> v[i];
	for(int i=0; i<n; i++) b[i] = (v[m]>>i) & 1;
	int ans = 0;
	for(int i=0; i<m; i++){
		int dif=0;
		for(int j=0; j<n; j++){
			if(((v[i]>>j)&1) != b[j]) dif++;		
		}
		if(dif<=k) ans++;
	}
	cout << ans << endl;
}


/*
7 3 1
8
5
111
17

0
*/