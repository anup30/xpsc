// B - Social Distance, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		int n, m;
		cin >> n >> m;
		vector<int> v(n);
		for(int i=0; i<n; i++) cin >> v[i];
		if(n>=m){
			cout << "NO\n";
			continue;
		}
		sort(v.begin(), v.end());
		ll pos=0;
		for(int i=0; i<n; i++){
			pos += v[i]+1;			
		}
		if(pos>m){
			cout << "NO\n";
			continue;
		}
		ll rem= m-pos;
		if(rem+v[0] >= v[n-1]){
			cout << "YES\n";
		}
		else cout << "NO\n";
	}
}

/*
2 5
2 1
*/

/*
6
3 2
1 1 1
2 4
1 1
2 5
2 1
3 8
1 2 1
4 12
1 2 1 3
4 19
1 2 1 3

NO
YES
NO
YES
NO
YES
*/