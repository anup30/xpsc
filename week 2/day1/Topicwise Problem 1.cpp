// week 2, Topicwise Problem 1, Accepted
// B. Sereja and Suffixes
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n, m, l;
	cin >> n >> m;
	vector<int> v(n+1);
	for(int i=1; i<=n; i++){
		cin >> v[i];
	}
	set<int> s;
	map<int, int> mp;
	for(int i=n; i>=1; i--){
		s.insert(v[i]);
		mp[i] = s.size();
	}
	for(int i=0; i<m; i++){
		cin >> l;
		cout << mp[l] << endl;
	}
	
}