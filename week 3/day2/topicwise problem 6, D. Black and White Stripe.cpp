// D. Black and White Stripe, Accepted
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);	
	
	int t=1;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		string s;
		cin >> s;		
		vector<int> cum(n,0);
		cum[0]=int(s[0]=='W');
		for(int i=1; i<n; i++){
			cum[i] = cum[i-1] + int(s[i]=='W');
		}		
		int ans =n, cur;
		for(int i=0, j=k-1; j<n; i++, j++){
			cur = cum[j] - cum[i] + int(s[i]=='W');
			if(cur<ans) ans = cur;
		}
		cout << ans << endl;
	}
}

/*
4
5 3
BBWBW
5 5
BBWBW
5 1
BBWBW
1 1
W
*/