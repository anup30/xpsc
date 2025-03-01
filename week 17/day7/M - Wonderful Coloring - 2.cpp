// M - Wonderful Coloring - 2, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		int n, k;
		cin >> n >> k;
		vector<int> a(n), ans(n, 0);
		map<int, vector<int>> mp;
		for (int i = 0; i < n; i++){
			cin >> a[i];
			mp[a[i]].push_back(i);
		}		
		vector<int> eligible;
		for (auto &p : mp) {
			int limit = min((int)p.second.size(), k);
			for (int j = 0; j < limit; j++){
				eligible.push_back(p.second[j]);
			}
		}
		int total = eligible.size();
		total = (total / k) * k;		
		for (int i = 0; i < total; i++){
			ans[eligible[i]] = (i%k)+1;
		}
		for (int i = 0; i < n; i++) cout << ans[i] << " ";		
		cout << endl;		
	}
}
