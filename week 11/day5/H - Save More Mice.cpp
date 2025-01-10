// H - Save More Mice, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		int n, k;
		cin >> n >> k;
		vector<int> v(k);
		for(int i=0; i<k; i++) cin >> v[i];
		sort(v.begin(), v.end());
		int cnt=0, rem=n;
		for(int i=k-1; i>=0; i--){
			if(n-v[i] < rem){
				cnt++;
				rem -= n-v[i];
			}
			else break;
		}
		cout << cnt << endl;
	}
}

/*
3
10 6
8 7 5 4 9 4
2 8
1 1 1 1 1 1 1 1
12 11
1 2 3 4 5 6 7 8 9 10 11

3
1
4
*/