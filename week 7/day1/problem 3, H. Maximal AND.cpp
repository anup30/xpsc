// H. Maximal AND, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
 
	int tc;
	cin >> tc;
	int b =30;
	while (tc--) {
		int n, K;
		cin >> n >> K;
		vector<int> a(n);
		for (int i = 0;i < n;i++) cin >> a[i];
		vector<int> bits(b + 1);
		for (int i = 0;i < n;i++) {
			for (int k = b;k >= 0;k--) {
				if ((a[i] >> k) & 1) bits[k]++;				
			}
		}
		int ans = 0;
		for (int k = b;k >= 0;k--){
			if (bits[k] == n) ans += (1LL << k);         
			else {
            	int need = n - bits[k];
            	if (K >= need) {
					ans += (1LL << k);
					K -= need;
				}
			}
		}
		cout << ans << endl;
	}
}