// B - Apple Division, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;
	ll total=0;
	cin >> n;
	vector<int> v(n);
	for(int i=0; i<n; i++){
		cin >> v[i];
		total += v[i];
	} 
	ll mn = INT_MAX;
	for (int mask = 0;mask < (1 << n); mask++) {  // 1<<n == 2^n		
		ll weight =0;
		for (int k = n-1; k >=0; k--){
			if ((mask >> k) & 1) 
				weight += v[k];						
		}
		ll absent = total-weight;
		mn = min(mn, abs(weight-absent));
	}	
	cout << mn << endl;
}

/*
6
1 2 10 11 50 51
*/