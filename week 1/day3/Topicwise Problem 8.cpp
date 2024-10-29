// Topicwise Problem 8, accepted
// B. Radio Station

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;
	string s1, s2;
	map<string, string> mp;
	for(int i=0; i<n; i++){
		cin >> s1 >> s2;
		mp[s2+";"] = s1;
	}
	for(int i=0; i<m; i++){
		cin >> s1 >> s2;
		cout << s1 << " " << s2 << " #" << mp[s2] << '\n';
	}
}
