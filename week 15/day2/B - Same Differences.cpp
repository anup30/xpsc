// B - Same Differences, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		int n, k;
		cin >> n;
		map<int, int> mp;
		vector<int> v(n);
		for(int i=0; i<n; i++){
			cin >> k;
			mp[k-i]++;
		}
		auto it = mp.begin();
		ll cnt=0;
		while(it != mp.end()){
			ll m= it->second;
			cnt += m*(m-1)/2;
			it++;
		}
		cout << cnt << endl;
	}
}
