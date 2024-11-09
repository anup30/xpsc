// F - Colourblindness, Accepted
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		string a,b;
		cin >> a;
		cin >> b;
		bool detect= false;
		for(int i=0; i<n; i++){
			if((a[i]=='R' && b[i]=='G') || 
			(a[i]=='R' && b[i]=='B') || 
			(a[i]=='G' && b[i]=='R') || 
			(a[i]=='B' && b[i]=='R')){
				detect =true;
				break;
			}
		}
		if(detect) cout << "NO\n";
		else cout << "YES\n";
	}	
}