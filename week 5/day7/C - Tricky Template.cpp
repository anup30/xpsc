// C - Tricky Template, Accepted
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
		string a, b, c;
		cin >> a >> b >>c;
		if(c==a || c==b){
			cout << "NO\n";
			continue;
		}
		bool cdifab = false;
		//bool absamecdif = false;
		for(int i=0; i<n; i++){
			if(c[i] != a[i] && c[i] != b[i]){
				cdifab =true; 
				break;
			}
		}		
		if(cdifab) cout << "YES\n";
		else cout << "NO\n";		
	}	
}