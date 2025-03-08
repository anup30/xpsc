// N - Colored Portals, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string x[] = {"BG", "BR", "BY", "GR", "GY", "RY"};
	int N = 200010;
	int a[N], l[N][10], r[N][10];	
	int tc=1;
	cin >> tc;

	while (tc--){
		int n, q;
		cin >> n >> q;
		for (int i = 0; i < n; ++i) {
			char s[5];
			cin >> s;
			a[i] = find(x, x + 6, s) - x;
		}
		for (int j = 0; j < 2; ++j) {
			vector<int> lst(6, -1e9);
			for (int i = 0; i < n; ++i) {
				lst[a[i]] = (j ? n - i - 1 : i);
				if (j == 0)
					for (int k = 0; k < 6; k++)
						l[i][k] = lst[k];
				else
					for (int k = 0; k < 6; k++)
						r[n - i - 1][k] = lst[k];
			}
			reverse(a, a + n);
		}
		while (q--) {
			int x, y;
			cin >> x >> y;
			x--, y--;
			int ans = 1e9;
			for (int j = 0; j < 6; ++j)
				if (a[x] + j != 5 && j + a[y] != 5) {
					ans = min(ans, abs(x - l[x][j]) + abs(l[x][j] - y));
					ans = min(ans, abs(x - r[x][j]) + abs(r[x][j] - y));
				}
			if (ans > 1e9 / 2)
				ans = -1;
			cout << ans << endl;
		}
		
	}
}
