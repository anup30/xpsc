// H - Medians, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		int n, k;
		cin >> n >> k;	
		if(n==1){
			cout << 1 << endl << 1 << endl;
			continue; 
		}	
		if(k==1 || k==n){
			cout << -1 << endl;
			continue;
		}		
		if(k%2==0){
			cout << 3 << endl;
			cout << 1 << " " << k << " " << k+1 << endl;
		}
		else{
			cout << 3 << endl;
			cout << 1 << " " << k-1 << " " << k+2 << endl;
		}
	}
}
