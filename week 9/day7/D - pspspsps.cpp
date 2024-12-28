// D - pspspsps, Accepted
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
		string s;
		cin >> s;
		bool pf = false, sf=false;
		for(int i=0; i<n; i++){
			if(i==0 && s[i]=='s') continue;
			if(i==n-1 && s[i]=='p') continue;
			if(s[i]=='p') pf= true;
			else if(s[i]=='s') sf= true;
		}	
		if(pf && sf) cout << "NO\n";
		else cout << "YES\n";
	}
}
