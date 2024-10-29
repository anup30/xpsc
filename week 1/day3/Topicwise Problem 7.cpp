// Topicwise Problem 7, accepted
// C. Registration system

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t;
	cin >> t;
	string s;
	map<string, int> mp;
	//mp["abc"]=1;
	//cout << mp["abc"] << " " << mp["xyz"]; // 1 0
	for(int i=1; i<=t; i++){
		cin >> s;
		if(mp[s]==0){
			cout << "OK\n";
			mp[s] = 1;
		}
		else{
			cout << s << mp[s] << '\n';
			mp[s] += 1;
		}
	}
}
