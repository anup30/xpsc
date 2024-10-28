// Topicwise Problem 4, Accepted
// B. Misha and Changing Handles
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	map<string, string> mp ={};
	int n;
	cin>> n;
	string a,b;
	for(int i=0; i<n; i++){
		cin >> a >> b;		
		mp[a] = b;
	}	
	for(auto &x: mp){
		string s= x.second;
		while(true){
			auto it = mp.find(s);
			if(it != mp.end()){
				x.second = mp.find(s)->second;
				s= x.second;
				mp.erase(it);
			}
			else{
				break;
			}
		}		 
	}
	cout << mp.size() << '\n';
	for(auto x: mp){
		cout << x.first << " " << x.second << '\n';
	}
}