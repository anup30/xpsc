// D - Masha and a Beautiful Tree, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

// divide and conqueer method
void func(int l1, int r1, int l2, int r2, vector<int> & v, int &ans){
	int mx=0;
	for(int i=l1; i<=r1; i++) mx= max(mx, v[i]);
	int mn = 1e7;
	for(int i=l2; i<=r2; i++) mn=min(mn,v[i]);
	if(mx>mn){
		for(int i=l1; i<=r1; i++) swap(v[i], v[i+(l2-l1)]);		
		ans++;
	}
	if(l1==r1) return;
	int mid1 = l1+(r1-l1)/2;
	int mid2 = l2+(r2-l2)/2;
	func(l1, mid1, mid1+1, r1, v, ans);
	func(l2, mid2, mid2+1, r2, v, ans);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	auto isSorted = [](vector<int> &v){ // lambda expression
		int sz=v.size();
		if(sz==0) return true;
		int tmp= v[0];		
		for(int i=1; i<sz; i++){
			if(v[i]<tmp) return false;
			tmp=v[i];
		}	
		return true;
	};
	
	while (tc--){
		int n;
		cin >> n;
		vector<int> v(n);
		for(int i=0; i<n; i++) cin >> v[i];
		if(isSorted(v)){
			cout << 0 << endl;
			continue;
		}		
		int l=0, r= n-1;
		int mid= l+(r-l)/2;
		int ans=0;
		func(l,mid, mid+1, r, v, ans);
		if(isSorted(v)) cout << ans << endl;		
		else cout << -1 << endl;
	}
}
