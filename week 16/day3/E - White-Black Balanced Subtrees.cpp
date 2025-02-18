// E - White-Black Balanced Subtrees, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		ll n;
		cin >> n;
		vector<ll>v(n-1);
		for(int i=0;i<n-1;i++) cin>>v[i];		
		string s;
		cin >> s;
		vector<int>count(n,0);
		for(int i=0;i<n;i++){
			if(s[i]=='W') count[i]=1;			
			else count[i]=-1;
		}
		for(int i=n-2;i>=0;i--) count[v[i]-1]+=count[i+1];
		int ans =0;
		for(int i=n-1;i>=0;i--){
			if(count[i]==0) ans++;
		}
		cout << ans << endl;		
	}
}
