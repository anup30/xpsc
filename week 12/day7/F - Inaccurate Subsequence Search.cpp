// F - Inaccurate Subsequence Search, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		int n, m, k;
		cin >> n >> m >> k;
		map<int, int> ma, mb;
		vector<int> a(n), b(m);
		for(int i=0; i<n; i++) cin >> a[i];
		for(int i=0; i<m; i++){
			cin >> b[i];
			mb[b[i]]++;
		} 
		int ans=0, cnt=0;
		for(int i=0; i<m; i++){
			ma[a[i]]++;
			if(ma[a[i]] <= mb[a[i]]) cnt++;
		}
		if(cnt>=k) ans++;
		for(int i=1, j=m; j<n; i++, j++){
			ma[a[i-1]]--;
			if(ma[a[i-1]] < mb[a[i-1]]) cnt--;
			ma[a[j]]++;
			if(ma[a[j]] <= mb[a[j]]) cnt++;
			if(cnt>=k) ans++;
		}
		cout << ans << endl;
	}
}
