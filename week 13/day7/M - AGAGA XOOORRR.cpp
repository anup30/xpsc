// M - AGAGA XOOORRR, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		int n;
		cin >> n;
		vector<int> v(n);
		for(int i=0; i<n; i++) cin >> v[i];
		bool bb=false;
		for(int i=0; i<n-1; i++){
			bool b=false;
			int x1=0;
			for(int j=0; j<=i; j++){
				x1 ^= v[j];
			}
			int x2=0;
			for(int k=i+1; k<n; k++){
				x2 ^= v[k];
				if(x2==x1){
					x2=0;
					b=true;
				}
			}
			if(b && x2==0){
				bb=true;
				break;
			}
		}
		if(bb) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
