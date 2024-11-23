// A - RCB vs CSK, Accepted
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);	
	
	int t=1;
	//cin >> t;
	while(t--){
		int x, y;
		cin >> x >> y;
		if(x-y >= 18) cout << "RCB\n";
		else cout << "CSK\n";
	}		
}