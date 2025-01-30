// B - Scale, Accepted
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
		string tmp="";		
		for(int i=0; i<n/k; i++) tmp += "-";
		//cout << "tmp= " << tmp << endl;	
		vector<string> v(n), a(n/k, tmp);
		for(int i=0; i<n; i++) cin >> v[i];
		
		for(int i=0, i2=0; i<n; i+=k, i2++){
			for(int j=0,j2=0; j<n; j+=k, j2++){
				a[i2][j2] = v[i][j];
			}
		}
		for(auto x: a) cout << x << endl;
	}
}

/*
4
4 4
0000
0000
0000
0000
6 3
000111
000111
000111
111000
111000
111000
6 2
001100
001100
111111
111111
110000
110000
8 1
11111111
11111111
11111111
11111111
11111111
11111111
11111111
11111111

0
01
10
010
111
100
11111111
11111111
11111111
11111111
11111111
11111111
11111111
11111111
*/