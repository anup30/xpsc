// L - Dances (Easy version), Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		int n, m;
		cin >> n >> m;
		vector<int> a(n), b(n);
		a[0]=1;
		for(int i=1; i<n; i++) cin >> a[i];
		for(int i=0; i<n; i++) cin >> b[i];
		sort(a.begin(), a.end());
		sort(b.begin(), b.end());
		int op=0;
		while(op<=n){
			bool found=true;
			for(int i=0, j=0+op; i<=n-1-op && j<=n-1; i++, j++){
				if(a[i]>= b[j]){
					found=false;
					break;
				}
			}			
			if(found) break;
			op++;
		}
		cout << op << endl;
	}
}
