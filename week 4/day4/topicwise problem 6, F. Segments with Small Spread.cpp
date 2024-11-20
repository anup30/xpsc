// F. Segments with Small Spread, Accepted
// count good segments where, max-min <= k 
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);	
	
	ll n, k;
	cin >> n >> k;
	vector<ll> v(n);
	for (int i=0; i<n; i++) cin >> v[i];
	ll left = 0, right = 0, count = 0, cum = 0;
	map<ll, ll> mp;
	//auto f = mp.begin();
	//auto b = mp.rbegin();
	while(right<n){
		mp[v[right++]]++;		
		while(mp.rbegin()->first - mp.begin()->first > k){
			mp[v[left]]--;
			if(mp[v[left]]==0) mp.erase(v[left]);
			left++;			
		}
		count += right-left;		
	}	
	cout << count << endl;
}

/*
7 3
2 6 4 3 6 8 9

16
*/