// L - Satyam and Counting, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		int n;
		cin >> n;
		map<int,int> m;
		set<pair<int,int>> s;
		for(int i = 0;i < n;i++){
			int x,y;cin >> x >> y;
			m[x]++;
			s.insert({x,y});
		}
		ll ans = 0;
		for(auto e : m){
			if(e.second == 2)ans += n - 2;
		}
		for(auto e : s){
			int x = e.first;
			int y = e.second;
			if(s.find({x - 1,1 - y}) != s.end() && s.find({x + 1,1 - y}) != s.end())ans++;
		}
		cout << ans << endl;		
	}
}
