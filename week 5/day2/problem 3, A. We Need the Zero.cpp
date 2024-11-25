// A. We Need the Zero, Accepted
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
		if(res==0) cout << 0 << endl;
		else{
			if(n%2==1) cout << res << endl;
			else cout << -1 << endl;			
		}
	}	
}
