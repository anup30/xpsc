// B - Following the String, Accepted
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
		vector<char> s(n);
		multimap<int, char> mp;
		char c= 'a';
		for(int i=0; i<26; i++) mp.insert({0, c++});
		for(int i=0; i<n; i++){
			cin >> v[i];
			auto it = mp.find(v[i]);
			s[i] = it->second;
			mp.erase(it);
			mp.insert({v[i]+1, s[i]});						
		}
		for(char x:s) cout << x;
		cout << endl;
	}	
}