// G - MEX Cycle, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		int n, x, y;
		cin >> n >> x >> y;
		vector<int> v(n+1);
		x--;
		y--;
		bool b= true;
		for(int i=x; i<=y-1; i++){
			if(b){
				v[i]=0;
				b=false;
			} 
			else{
				v[i]=1;
				b=true;
			}
		}
		b=true;		
		for(int i=x; i>=0; i--){
			if(b){
				v[i]=0;
				b=false;
			} 
			else{
				v[i]=1;
				b=true;
			}
		}
		v[n] = v[0];
		if(v[0]==0) b=false;
		else b=true;
		for(int i=n-1; i>=y+1; i--){
			if(b){
				v[i]=0;
				b=false;
			} 
			else{
				v[i]=1;
				b=true;
			}
		}
		if(v[y+1]==0 && v[y-1]==0) v[y]=1;
		else if(v[y+1]==1 && v[y-1]==1) v[y]=2;
		else if(v[y+1]==1 && v[y-1]==0) v[y]=2;
		else if(v[y+1]==0 && v[y-1]==1) v[y]=2;
		
		for(int i=0; i<n; i++) cout << v[i] << " ";
		cout << endl;
	}
}

/*
7
5 1 3
4 2 4
6 3 5
7 3 6
3 2 3
5 1 5
6 2 5

0 2 1 0 1
1 2 1 0
1 2 0 1 2 0
0 1 2 0 1 0 1
2 0 1
1 0 2 1 0
0 1 2 0 2 1
*/
