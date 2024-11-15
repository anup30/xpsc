// H - Line, Accepted
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
		string s;
		cin >> s;
		ll cum = 0;		
		for(int i=0; i<n; i++){
			if(s[i]=='L') cum += i;			
			else cum += (n-i-1);			
		}	
		int cur = 1;	
		vector<pair<int, ll>> vp; // ---
		for(int i=0, j=n-1; i<j; i++, j--){
			if(s[i]=='L'){
				cum += (n-2*i-1); // (n-i-1) - (i)
				vp.push_back({cur,cum});
				cur++;
			}
			if(s[j]=='R'){
				cum += (2*j-n+1); // (i)-(n-i-1)
				vp.push_back({cur,cum});
				cur++;
			}
		}
		while(cur<=n){
			vp.push_back({cur,cum});
			cur++;
		}
		for(auto x: vp) cout << x.second << " ";
		cout << endl;
	}	
}
