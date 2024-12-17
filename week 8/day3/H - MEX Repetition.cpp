// H - MEX Repetition, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		ll n, k, tmp;
		cin >> n >> k;
		ll sum = n*(n+1)/2;
		ll cur = 0;
		vector<int> v(n);
		for(int i=0; i<n; i++){
			cin >> v[i];
			cur += v[i];
		} 
		v.push_back(sum-cur); // 1st mex
		tmp = k%(n+1); // repetitions of arrays, after n+1 back to original
		for(int i=0; i<n; i++) cout << v[(i-tmp+n+1)%(n+1)] << " ";
		cout << endl;		
	}
}
