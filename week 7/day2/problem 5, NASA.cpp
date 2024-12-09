// NASA, Accepted
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);	
	
	vector<int> store;
	string s, tmp;
	for(int i=0; i<32768; i++){ // 2^15 = 32768
		s = to_string(i);
		tmp =s;
		reverse(s.begin(),s.end());
		if(tmp==s) store.push_back(i);		
	}	
	int tc;
	cin>>tc;
	while(tc--){		
		int n;
		cin >> n;
		vector<int> v(n);
		for(int i=0; i<n; i++) cin >> v[i];
		unordered_map<int,int>mp;
		ll ans=0;
		for(int i:v){
			mp[i]++;
			for(int plain:store){
				ans+= mp[i^plain];
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}

/*
2
4
13 27 12 26
3
2 2 2

8
6
*/

/*
if a^b = c
then a^c=b
*/
