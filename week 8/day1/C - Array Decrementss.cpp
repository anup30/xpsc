// C - Array Decrements, Accepted
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
		vector<int> a(n), b(n), dif(n);
		for(int i=0; i<n; i++) cin >> a[i];
		for(int i=0; i<n; i++) cin >> b[i];
		bool pos=true;
		int max_dif = a[0]-b[0];
		for(int i=0; i<n; i++){
			if(a[i]<b[i]){
				pos=false;
				break;
			}
			dif[i] = a[i]-b[i];
			max_dif = max(max_dif, dif[i]);
		}
		if(!pos){
			cout << "NO\n";
			continue;
		} 
		for(int i=0; i<n; i++){
			if(a[i]-b[i] != max_dif && b[i]>0){
				pos= false;
				break;
			}
		}			
		if(pos) cout << "YES\n";
		else cout << "NO\n";
	}
}
