// I - Robin Hood in Town, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	int a[200005];
	while (tc--){
		int n; 
		cin >> n;
		for(int i = 0; i < n; i++) cin >> a[i];
		sort(a, a + n);
		int need_to_be_sad = (n % 2 ? ((n+1)/2 ): (n/2 + 1));		
		if(n == 1 or n == 2) {
		    cout << -1 << endl;
		    continue;
		}		
		ll max_avg = 2 * a[need_to_be_sad - 1];		
		ll max_sum = max_avg * n;
		ll curr_sum = 0;
		for(int i = 0; i < n; i++) curr_sum += a[i];		
		if(curr_sum > max_sum) cout << 0 << endl;
		else cout << max_sum - curr_sum + 1 << endl;		
	}
}
