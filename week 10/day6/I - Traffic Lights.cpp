// I - Traffic Lights, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int x, n, k, big=1e9+1;	
	cin >> x >> n;	
	map<int, int> mp;
	multiset<int> ms;
	mp[0] = x;
	mp[big]=0;
	ms.insert(x-0);
	for(int i=0; i<n; i++){
		cin >> k;
		auto it = mp.upper_bound (k);
		it--;
		int dis = it->second - it->first;
		int tmp = it->second;
		it->second = k; //
		mp[k] = tmp; //
		auto fi = ms.find(dis);
		ms.erase(fi);
		ms.insert(tmp-k);
		ms.insert(k-it->first);
		cout << *ms.rbegin() << " ";
	}
	
}

/*
8 3
3 6 2

5 3 3
*/
