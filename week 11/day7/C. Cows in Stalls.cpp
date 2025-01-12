// C. Cows in Stalls, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int n, k;
	cin >> n >> k;
	vector<int> v(n);
	for(int i=0; i<n; i++) cin >> v[i];
	int l=1, r= v[n-1] - v[0], ans=0;
	while(l<=r){
		int mid= l+(r-l)/2, cnt=1, last=v[0];
		for(int i=1; i<n; i++){
			if(v[i]-last >= mid){
				cnt++;
				last=v[i];
			}			
		}
		if(cnt>=k){
			l=mid+1;
		}
		else{
			r= mid-1;
		}
	}
	cout << r << endl;
}
