// J - Robert Hood and Mrs Hood, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		int n, d, k;
		cin >> n >> d >> k;
		vector<int> s(n + 5);
		for (int i = 1; i <= k; i++) {
			int tl, tr;
			cin >> tl >> tr;
			s[max(1LL, tl - d + 1LL)]++;
			s[tr + 1]--;
		}		
		int cur = 0;
		int max_pos = 0, min_pos = 0;
		int mx = -1, mn = 1e9;
		for (int i = 1; i <= n - d + 1; i++) {
			cur += s[i];
			if (mx < cur) {
				mx = cur;
				max_pos = i;
			}
			if (mn > cur) {
				mn = cur;
				min_pos = i;
			}
		}
		cout << max_pos << ' ' << min_pos << endl;		
	}
}
