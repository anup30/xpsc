// C - Plus or Minus, Accepted
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);	
	
	int t,a,b,c;
	cin >> t;
	while(t--){
		cin >> a >> b>> c;
		if(a+b == c) cout << "+\n";
		else cout << "-\n";
	}	
}