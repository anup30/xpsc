// F - Battle for Survive, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);	
	
	int t=1;
	cin >> t;
	while(t--){
        int n;            
		cin>>n;
		vector<ll> v(n);
		for(int i=0; i<n; i++) cin >> v[i];
		if(n==2){
			cout << v[1]-v[0] << endl;
			continue;
		}
		for(int i=0; i<=n-3; i++) v[n-2] -= v[i];
		cout << v[n-1] - v[n-2] << endl;				
    }
}
