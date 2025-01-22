// B - Special Permutation, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		int n, a, b;
		cin >> n >> a >> b;
		vector<int> v;	
		v.push_back(a);		
		for(int i=n; i>=1; i--){
			if(i!= a && i!=b) v.push_back(i);			
		}
		v.push_back(b);
		bool x=true;
		if(v.size() !=n) x=false;
		int mn = a;
		for(int i=0; i<n/2; i++){
			if(v[i]<mn) x=false;
		}
		int mx = b;
		for(int i=n-1; i>=n/2; i--){
			if(v[i]>mx) x=false;
		}
		if(!x) cout << -1 << endl;
		else{
			for(int i:v) cout << i << " ";
			cout << endl;
		}
	}
}

/*
7
6 2 5
6 1 3
6 4 3
4 2 4
10 5 3
2 1 2
2 2 1

4 2 6 5 3 1
-1
6 4 5 1 3 2 
3 2 4 1 
-1
1 2 
2 1
*/