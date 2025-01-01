// E. Eating Queries, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		int n, q;
		cin >> n >> q;
		vector<int> v(n);
		for(int i=0; i<n; i++) cin >> v[i];
		sort(v.begin(), v.end(), greater<int>());
		vector<ll> psum(n+1);
		psum[0]=0;
		for(int i=1; i<=n; i++) psum[i] = psum[i-1]+v[i-1];
		while(q--){
			int key;
			cin >> key;
			int l=1, r=n, idx=-1;
			while(l<=r){
				int mid = l+(r-l)/2;
				if(psum[mid] < key) l=mid+1;
				else{
					idx = mid;
					r= mid-1;
				}
			}
			cout << idx << endl;			
		}
	}
}