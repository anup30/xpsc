// F - K-Sort, Accepted
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
		vector<int> v(n), a;
		for(int i=0; i<n; i++) cin >> v[i];
		int mx=v[0];
		for(int i=1; i<n; i++){			
			if(v[i]<mx)	a.push_back(mx-v[i]);	
			mx = max(mx, v[i]);		
		}
		int sz= a.size();
		if(sz==0){
			cout << 0 << endl;
			continue;
		}
		sort(a.begin(), a.end());
		vector<int> b(sz,0);
		b[0]=a[0];
		for(int i=1; i<sz; i++) b[i]= a[i]-a[i-1];		
		ll cnt=0;
		for(int i=0; i<sz; i++) cnt += (ll)b[i]*(sz-i+1);		
		cout << cnt << endl;
	}
}


/*
5
3
1 7 9
5
2 1 4 7 6
4
1 3 2 4
1
179
9
344 12 37 60 311 613 365 328 675

0
3
2
0
1821
*/