// T - Fall Down, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int tc = 1;
	cin >> tc;
	while (tc--) {
		ll r, c;
		cin >> r >> c;
		vector<vector<char>> grid(r, vector<char>(c));
		for (ll i = 0; i < r; i++) {
			for (ll j = 0; j < c; j++) {
				cin >> grid[i][j];
			}
		}
		vector<vector<char>> ans(r, vector<char>(c, '.'));
		for (ll i = 0; i < c; i++) {
			ll sum = 0;
			for (ll j = 0; j < r; j++) {
				if (grid[j][i] == '*') {
					sum++;
				}
				else if (grid[j][i] == 'o') {
					ans[j][i] = 'o';
					for (ll k = 1; k <= sum; k++) {
						ans[j - k][i] = '*';
					}
					sum = 0;
				}
			}
			if (sum) {
				for (ll k = 1; k <= sum; k++) {
					ans[r - k][i] = '*';
				}
			}
		}
		for (ll i = 0; i < r; i++) {
			for (ll j = 0; j < c; j++) {
				cout << ans[i][j];
			}
			cout << endl;
		}
	}
}

/*
3
6 10
.*.*....*.
.*.......*
...o....o.
.*.*....*.
..........
.o......o*
2 9
...***ooo
.*o.*o.*o
5 5
*****
*....
*****
....*
*****


..........
...*....*.
.*.o....o.
.*........
.*......**
.o.*....o*

....**ooo
.*o**o.*o

.....
*...*
*****
*****
*****

*/