// Topicwise Problem 9, accepted
// B. Chat Order

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;
	cin >> n;
	vector<string> v(n);
	for(int i=0; i<n; i++){
		cin >> v[i];		
	}	
	map<string, bool> mp;
	for(int i=n-1; i>=0; i--){	
		auto it = mp.find(v[i]);
		if(it == mp.end()){
			cout << v[i] << '\n';
			mp[v[i]] = true;
		}
	}	
}
