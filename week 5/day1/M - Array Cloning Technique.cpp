// M - Array Cloning Technique, Accepted
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
		map<int, int> mp;
		for(int i=0; i<n; i++){
			cin >> v[i];
			mp[v[i]]++;
		} 
		auto it = mp.begin();
		int ma = it->first; // max appeared;
		int count = it->second;
		while(it != mp.end()){
			if(it->second > count){
				count = it->second;
				ma = it->first;
			}
			it++;
		}
		if(count>=n){
			cout << 0 << endl;
			continue;
		}
		int op=0;
		while(count<n){
			if(2*count<n){
				op += count;
				count *=2;
				op++;
			}
			else{
				op += (n-count+1);
				count=n;
			}
		}
		cout << op << endl;
	}	
}