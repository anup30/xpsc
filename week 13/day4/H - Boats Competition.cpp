// H - Boats Competition, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		int n;
		cin >> n;
		vector<int> v(n);
		for(int i=0; i<n; i++) cin >> v[i];
		sort(v.begin(), v.end());		
		int ans=0;
		for(int i=0; i<n; i++){			
			for(int j=n-1; j>i; j--){
				int sum= v[i]+v[j], cnt=1; // better count for sum = 2 to 2*n,
				int l=i+1, r=j-1;
				while(l<r){
					int s1 = v[l]+v[r];
					if(s1==sum){
						cnt++;
						l++;
						r--;					
					}
					else if(s1<sum) l++;					
					else if(s1>sum) r--;										
				}		
				ans= max(ans, cnt);
			}
		}
		cout << ans << endl;
	}
}

/*
5
5
1 2 3 4 5
8
6 6 6 6 6 6 8 8
8
1 2 2 1 2 1 1 2
3
1 3 3
6
1 1 3 4 2 2

2
3
4
1
2
*/
