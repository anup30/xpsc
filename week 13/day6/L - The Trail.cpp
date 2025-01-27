// L - The Trail, Accepted
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
		string s;
		cin >> s;
		s += "D";
		vector<vector<ll>> v(n, vector<ll>(m)); // matrix size
		for(int r=0; r<n; r++){
			for(int c=0; c<m; c++){
				cin >> v[r][c];
			}
		}
		int si=0, r=0, c=0;
		ll cnt=0;	
		bool b=true;
		while(b){
			char ch= s[si++]; // 'D' , 'R'
			if(ch=='D'){ // D
				cnt=0;
				for(int i=0; i<m; i++){
					cnt += v[r][i];
				}
				v[r][c] = 0LL - cnt;
				if(r==n-1 && c==m-1) b=false;
				r++;
			}
			else{ // R
				cnt=0;
				for(int i=0; i<n; i++){
					cnt += v[i][c];
				}
				v[r][c] = 0LL - cnt;
				if(r==n-1 && c==m-1) b=false;
				c++;
			}			
		}		
		for(int r=0; r<n; r++){
			for(int c=0; c<m; c++){
				cout << v[r][c] << " ";
			}
			cout << endl;
		}		
	}
}

/*
4
3 3
DRRD
0 2 3
0 0 0
3 1 0
4 5
DRRRRDD
0 1 0 2 3
0 0 0 0 0
-1 0 -3 -3 0
0 0 0 -1 0
2 3
RRD
0 0 0
0 1 0
5 5
DDDDRRRR
0 25 2 9 11
0 6 13 20 22
0 17 24 1 8
0 3 10 12 19
0 0 0 0 0

1 2 3
2 3 1
3 1 2
-6 1 0 2 3
7 -1 3 2 -11
-1 0 -3 -3 7
0 0 0 -1 1
0 -1 1
0 1 -1
18 25 2 9 11
4 6 13 20 22
15 17 24 1 8
21 3 10 12 19
7 14 16 23 5
*/
