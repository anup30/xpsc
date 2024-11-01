// Topicwise Problem 12, Accepted
// B. Symmetric Encoding

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t=1;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		string s;
		cin >> s;
		int len = s.size();
		map<char, bool> mp;
		for(char c:s){
			mp[c] = true;			
		}
		string r ="";
		for(auto x:mp){
			r += x.first;
		}
		int rlen = r.size();
		map<char, char> ch;
		for(int i=0, j=rlen-1; i<=j; i++,j--){
			ch[r[i]] = r[j];
			ch[r[j]] = r[i];
		}
		string res = s;
		for(int i=0; i<len; i++){
			res[i] = ch[s[i]];
		}
		cout << res << endl;
	}
}
