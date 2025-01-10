// I - Number Game, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool check(vector<int> &v, int mid){
	multiset<int> ms;
	for(int i:v) ms.insert(i);
	for(int i=1;i<=mid; i++){
		if(ms.empty()) return false;
		int req = mid-i+1;
		auto it = ms.upper_bound(req);
		if(it==ms.begin()) return false;
		it--;
		ms.erase(it);
		if(!ms.empty()){
			it= ms.begin();
			int p = *it;
			p+=req;
			ms.erase(it);
			ms.insert(p);
		}
	}
	return true;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		int n;
		cin >> n;
		vector<int> v(n);		
		for(int i=0; i<n; i++) cin >> v[i];
		sort(v.begin(), v.end());
		int l=0, r=n, mx=0;
		while(l<=r){
			int mid = l+(r-l)/2;
			if(check(v, mid)){
				mx = mid;
				l= mid+1;
			}
			else{
				r=mid-1;
			}
		}
		cout << mx << endl;
	}
}

/*
4
3
1 1 2
4
4 4 4 4
1
1
5
1 3 2 1 1

2
0
1
3
*/
