// C - Little Nikita, Accepted
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);	
	
	int t=1;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		if(m>n) cout << "NO\n";
		else if(n==m) cout << "YES\n";
		else{
			if((n-m)%2==0) cout << "YES\n";
			else cout << "NO\n";
		}
	}
}