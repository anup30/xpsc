// A - Bazoka and Mocha's Array, Accepted
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
		vector<int> v(n);
		for(int i=0; i<n; i++) cin >> v[i];				
		int idx=-1;
		for(int i=0; i<=n-2; i++){
			if(v[i]>v[i+1]){
				idx=i;
				break;
			}
		}
		if(idx==-1){
			cout << "YES\n";
			continue;
		}
		vector<int> v2 = v;
		sort(v2.begin(), v2.end());
		vector<int> v3;
		for(int i=idx+1; i<n; i++) v3.push_back(v[i]);
		for(int i=0; i<=idx; i++) v3.push_back(v[i]);
		bool ans = true;
		for(int i=0; i<n; i++){
			if(v2[i] != v3[i]){
				ans =false;
				cout << "NO\n";
				break;
			}
		}
		if(ans) cout << "YES\n";
	}
}
