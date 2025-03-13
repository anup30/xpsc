// E. Iva & Pav, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool check(int mid, vector<vector<int>>&pref, int k, int l){
	int ans=0;
	int f=0;
	for(int j=0; j<32; j++){
		if((pref[mid][j]-pref[l-1][j])==(mid-l+1)){
			if(f==0){
				f=1;
				ans=(1<<j);
			}
			else{
				ans+=(1<<j);
			}
		}
	}
	return ans>=k;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		int n;cin>>n;
		vector<ll>v(n);
		for(int l=0;l<n;l++){
			cin>>v[l];
		}
		vector<vector<int>>pref(n+1,vector<int>(32,0));
		for(int l=1; l<=n; l++){
			for(int j=0; j<32; j++){
				if((v[l-1]&(1<<j))){
					pref[l][j]=1;
				}
				pref[l][j]+=pref[l-1][j];
			}
		}
		vector<int>d;
		int q;
		cin>>q;
		while(q--){
			int l,k;
			cin >>l>>k;
			int s=l, e=n, ans =-1;
			while(s<=e){
				int mid=(s+e)/2;
				bool chk=check(mid,pref,k,l);
				if(chk){
					ans=mid;
					s=mid+1;
				}
				else e=mid-1;
			}
			d.push_back(ans);
		}
		for(auto it:d) cout << it << " ";
		cout << endl;		
	}
}
