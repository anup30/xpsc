// C. Closest to the Right, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int n, k, q;
	cin >> n >> k;
	vector<int> v(n);	
	for(int i=0; i<n; i++) cin >> v[i];
	while(k--){
		cin >> q;
		int l=0, r=n-1, idx=n;
		while(l<=r){
			int mid = l+(r-l)/2; // l+(r-l)/2 or (l+r)/2
			if(v[mid]<q) l= mid+1;
			else{				
				idx= mid;
				r= mid-1;
			}			
		}		
		cout << idx+1 << endl;
	}
}