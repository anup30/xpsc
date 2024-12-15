// B - Maximise Score, Accepted
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
		vector<int> v(n+2);
		for(int i=1; i<=n; i++) cin >> v[i];
		v[0]=v[1];
		v[n+1] = v[n];
		int idx=-1, mn=1e6, tmp;
		for(int i=1; i<=n; i++){
			tmp = max(abs(v[i]-v[i-1]), abs(v[i]-v[i+1]));
			if(tmp<mn){
				idx=i;
				mn=tmp;
			}
		}
		cout << mn <<endl;
	}
}


/*
3
3
1 1 1
4
1 2 3 4
5
-10 10 40 -50 30

0
1
20
*/