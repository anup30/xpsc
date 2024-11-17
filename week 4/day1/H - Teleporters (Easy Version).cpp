// H - Teleporters (Easy Version), Accepted
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t=1;
	cin >> t;
	while(t--){
		ll n, c;
		cin >> n >> c;
		vector<ll> v(n), ar;
		for(int i=0; i<n; i++) cin >> v[i];
		for(int i=0; i<n; i++) ar.push_back(v[i]+i+1);
		sort(ar.begin(), ar.end());
		
		ll cum = c, count = 0;
		for(int i=0; i<n; i++){
			cum -= ar[i];
			if(cum>=0) count++;
			else break;
		}	
		cout << count << endl;	
	}	
}
