// G - Longest Strike, Accepted
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
		cin >> n >> k;
		vector<int> v(n), a;
		map<int, int> mp;
		for(int i=0; i<n; i++){
			cin >> v[i];
			mp[v[i]]++;
		} 
		auto it = mp.begin();
		while(it != mp.end()){
			if(it->second >= k) a.push_back(it->first);
			it++;
		}				
		int sz = a.size();
		if(sz==0){
			cout << -1 << endl;
			continue;
		}
		sort(a.begin(), a.end());
		pair<int, int> pa = {a[0], a[0]};
		int i=0, mx=1, cnt=0;
		while(i<sz){
			if(i+1<sz && a[i]+1 == a[i+1]){
				int j=i+1;
				while(j<sz && a[j]-1 == a[j-1])	j++;
				cnt = j-i;
				if(cnt>mx){
					pa = {a[i], a[j-1]};
					mx = cnt;
				}
				i=j;
				continue;
			}
			i++;			
		}
		cout << pa.first << " " << pa.second << endl;
	}
}


/*
4
7 2
11 11 12 13 13 14 14
5 1
6 3 5 2 1
6 4
4 3 4 3 3 4
14 2
1 1 2 2 2 3 3 3 3 4 4 4 4 4


13 14
1 3
-1
1 4
*/