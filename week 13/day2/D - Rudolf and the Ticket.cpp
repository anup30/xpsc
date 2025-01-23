// D - Rudolf and the Ticket, Accepted
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
		vector<int> b(n), c(m);
		for(int i=0; i<n; i++) cin >> b[i];
		for(int i=0; i<m; i++) cin >> c[i];
		sort(b.begin(), b.end());
		sort(c.begin(), c.end());
		int cnt=0, x=0;
		for(int i=0; i<n; i++){
			x = k-b[i];
			if(x<k){
				auto it = upper_bound(c.begin(), c.end(), x);
				cnt += (it-c.begin());
			}			
		}
		cout << cnt << endl;	
	}
}
