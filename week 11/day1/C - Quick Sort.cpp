// C - Quick Sort, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		int n, k, cnt=1, res=0;
		cin >> n >> k;
		vector<int> v(n), a(n+1,0);
		for(int i=0; i<n; i++){
			cin >> v[i];
			a[v[i]] = i;
		}
		for(int i=2; i<=n; i++){
			if(a[i]>a[i-1]) cnt++;
			else break;
		} 
		int rem = n-cnt;
		if(rem%k==0) res = rem/k;
		else res = rem/k +1;
		cout << res << endl;
	}
}



/*
4
3 2
1 2 3
3 1
3 1 2
4 2
1 3 2 4
4 2
2 3 1 4

0
1
1
2
*/

/*
5 3
5 4 3 2 1

2
*/