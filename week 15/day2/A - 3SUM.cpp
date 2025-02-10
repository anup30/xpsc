// A - 3SUM, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		int n, j, k;
		cin >> n;
		vector<int> v;
		map<int, int> mp;		
		for(int i=0; i<n; i++){			
			cin >> j;
			k = j%10;
			mp[k]++;	
		}	
		auto it = mp.begin();
		while(it != mp.end()){
			if(it->second >3) it->second = 3;
			it++;
		}
		it = mp.begin();
		while(it != mp.end()){
			for(int i=0; i<it->second; i++){
				v.push_back(it->first);
			}
			it++;
		}
		int sz = v.size();
		bool b= false;
		for(int i=0; i<sz; i++){
			for(int j1=i+1; j1<sz; j1++){
				for(int k1=j1+1; k1<sz; k1++){
					if((v[i]+v[j1]+v[k1])%10 == 3){
						b=true;
						break;
					}
				}
			}
		}
		if(b) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
