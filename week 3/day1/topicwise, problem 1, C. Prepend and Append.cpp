// C. Prepend and Append, Accepted
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);	
	
	int t=1;
	cin >> t;
	while(t--){
		int len, ans;
		string s;
		cin >> len >> s;
		bool found =false;
		for(int i=0, j=len-1; i<=j; i++, j--){
			if(s[i]==s[j]){
				found= true;
				ans = j-i+1;
				break;
			}
		}
		if(found) cout << ans << endl;
		else cout << 0 << endl;
	}
		
}

// 2,3,8