// Minimum XOR, Accepted
// int == 32 bits
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);	
	
	int t=1;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> v(n);
		for(int i=0; i<n; i++) cin >> v[i];
		int res = v[0];
		for(int i=1; i<n; i++){
			res = res ^ v[i]; // xor == ^
		}		
		int mn = res;
		for(int i=0; i<n; i++){
			int cur = res ^ v[i];
			mn = min(mn, cur);
		}
		cout << mn << endl; 
	}	
}

/*
4
2 4 3 6
*/