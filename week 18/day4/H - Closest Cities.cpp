// H - Closest Cities, Accepted
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
		cin >> n;
		vector<int> v(n+1);
		for(int i=1; i<=n; i++) cin >> v[i];
		vector<int> pf(n+1,0), pb(n+1,0);
		pf[1]=0;
		pf[2]=1;
		for(int i=3; i<=n; i++){
			int back = abs(v[i-1]-v[i-2]), front = abs(v[i-1]-v[i]);
			if(back>front) pf[i] = pf[i-1]+1;			
			else pf[i]= pf[i-1]+ abs(v[i-1]-v[i]);			
		}
		pb[n]=0;
		pb[n-1] = 1;
		for(int i=n-2; i>=1; i--){
			int back = abs(v[i+1]-v[i]), front = abs(v[i+1]-v[i+2]);
			if(back<front) pb[i] = pb[i+1]+1;
			else pb[i] = pb[i+1]+abs(v[i+1]-v[i]);
		}
		cin >> m;
		for(int i=0; i<m; i++){
			int x, y;
			cin >> x >> y;
			if(x<y){
				cout << pf[y]-pf[x] << endl;
			}
			else{
				cout << pb[y]-pb[x] << endl;
			}
		}
	}
}

/*
1
5
0 8 12 15 20
5
1 4
1 5
3 4
3 2
5 1

3
8
1
4
14
*/
