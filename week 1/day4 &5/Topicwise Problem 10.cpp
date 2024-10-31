// Topicwise Problem 10, accepted
// A. Tom Riddle's Diary

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;
	cin >> n;
	vector<string> v(n);
	map<string, bool> mp;
	for(int i=0; i<n; i++){
		cin >> v[i];
		auto it = mp.find(v[i]);
		if(it == mp.end()){
			cout << "NO\n";
			mp[v[i]] = true;
		}
		else{
			cout << "YES\n";
		}
	}	
}
