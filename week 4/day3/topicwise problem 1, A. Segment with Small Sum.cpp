// A. Segment with Small Sum, Accepted
// topic: variable sized sliding window
// find the longest good segment where sum <= s
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	ll n, s;
	cin >> n >> s;
	vector<int> v(n);
	for (int i=0; i<n; i++) cin >> v[i];
	ll left = 0, right = 0, count = 0, cum = 0;
	while (right < n) {
		cum += v[right++];
		if (cum <= s) count = max(count, right - left);		
		else cum -= v[left++];		
	}
	cout << count << endl;
}

/*
9 20
1 2 3 100 4 5 6 1 200

4
*/
