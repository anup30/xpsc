// M - Alternating String, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	int inf = INT_MAX;	
	while (tc--){
		int n; cin >> n;
		string s; cin >> s;
	   
		int ans = inf;
		for (char a = 'a'; a <= 'z'; a++) {
		  for (char b = 'a'; b <= 'z'; b++) {
			  if (n % 2 == 0) {				
				int cur = 0;
				for (int i = 0; i < n; i++) {
				  if (i % 2 == 0 and s[i] != a) cur++;
				  else if (i % 2 == 1 and s[i] != b) cur++;
				}
				ans = min(ans, cur);
			  } 
			  else {				
				vector pref(2, vector<int> (n, 0));
	   
				for (int i = 0; i < n; i++) {
				  if (i > 0)
					pref[0][i] += pref[0][i-1],
					  pref[1][i] += pref[1][i-1];
					  
				  if (i % 2 == 0) {
					if (s[i] != a) pref[0][i]++;
					if (s[i] != b) pref[1][i]++;
				  } else {
					if (s[i] != b) pref[0][i]++;
					if (s[i] != a) pref[1][i]++;
				  }
				}	   
				int best = inf;
				for (int j = 0; j < n; j++) {
					int cur = 1;
					if (j > 0) cur += pref[0][j-1];
					if (j < n - 1) cur += (pref[1][n-1] - pref[1][j]);
					best = min(best, cur);
				}	   
				ans = min(ans, best);				
			  }
	   
			}
		  }
		cout << ans << endl;		
	}
}
