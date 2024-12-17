// G - Deja Vu. Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		int n, q, tmp;
		cin >> n >> q;
		vector<int> a(n), x;
		for(int i=0; i<n; i++) cin >> a[i];
		for(int i=0; i<q; i++){
			cin >> tmp;
			if(x.empty()) x.push_back(tmp);
			else if(tmp<x.back()) x.push_back(tmp);	// <---
		} 
		q = x.size();
		for(int i=0; i<q; i++){
			for(int j=0; j<n; j++){
				if((a[j] % (1<<(x[i]))) == 0){
					a[j] += (1<<(x[i]-1));
				}
			}
		}
		for(int i=0; i<n; i++) cout << a[i] << " ";
		cout << endl;
	}
}
