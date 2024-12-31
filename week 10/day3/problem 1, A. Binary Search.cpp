// A. Binary Search, Accepted
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
		int l = 0, r=n-1;
		bool found=false;
		while(l<=r){
			int mid = l+(r-l)/2; // l+(r-l)/2 or (l+r)/2
			if(v[mid]==q){
				found=true;
				cout << "YES\n";
				break;
			}
			else if(v[mid]<q) l=mid+1;			
			else if(v[mid]>q) r = mid-1;
		}
		if(!found) cout << "NO\n";
	}	
}
