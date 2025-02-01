// E - Greg and Array. Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	ll n, m, k;
	cin >> n >> m >> k;
	vector<ll> v(n);
	for(int i=0; i<n; i++) cin >> v[i];
	//int r=m+1, c= 3;
	vector<vector<ll>> am(m+1, vector<ll>(3)); // rxc matrix 
	for(int i=0; i<m; i++){
		cin >> am[i][0] >> am[i][1] >> am[i][2]; // remember to -1
	}
	vector<ll> dif(m+1,0);
	for(int i=0; i<k; i++){
		ll x, y;
		cin >> x >> y;
		dif[x-1]++;
		dif[y]--;
	}
	for(int i=1; i<m+1; i++){
		dif[i] += dif[i-1];
	}
	for(int i=0; i<m; i++){
		am[i][2] *= dif[i]; 
	}
	vector<ll> dif2(n+1,0);
	for(int i=0; i<m; i++){
		dif2[am[i][0]-1]+= am[i][2];
		dif2[am[i][1]] -= am[i][2];
	}	
	for(int i=1; i<n; i++){
		dif2[i] += dif2[i-1];
	}
	for(int i=0; i<n; i++){
		cout << v[i]+dif2[i] << " ";
	}
	cout << endl;
}

/*
3 3 3
1 2 3
1 2 1
1 3 2
2 3 4
1 2
1 3
2 3

9 18 17
*/