// F - Pair Programming
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		int k, n, m;
		cin >> k >> n >> m;
		vector<int> a(n), b(m);
		for(int i=0; i<n; i++) cin >> a[i];
		for(int i=0; i<m; i++) cin >> b[i];
		bool x=true;
		int i=0, j=0, cur=k, tot= n+m;
		vector<int> v(tot,0);
		for(int p=0; p<tot; p++){
			if(i<n && a[i]<=cur){
				v[p] = a[i];
				if(a[i]==0) cur++;
				i++;
			}
			else if(j<m && b[j]<=cur){
				v[p]= b[j];
				if(b[j]==0) cur++;
				j++;
			}
			else {				
				x=false;
				break;
			}
		}
		if(!x) cout << -1 << endl;
		else{
			for(int i:v) cout << i << " ";
			cout << endl;
		}
	}
}
