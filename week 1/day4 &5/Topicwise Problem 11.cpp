// Topicwise Problem 11, accepted
// A. Strong Password

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int len = s.size();
		int found = -1; // repetition index
		for(int i=1; i<len; i++){
			if(s[i-1]==s[i]){
				found = i;
				break;
			}
		}
		if(found<0){
			if(s[0]=='a') cout << 'b' << s << '\n';
			else cout << 'a' << s << '\n';
		}
		else{
			for(int i=0; i<found; i++){
				cout << s[i];
			}
			if(s[found]=='a') cout << 'b';
			else cout << 'a';
			for(int i=found; i<len; i++){
				cout << s[i];
			}
			cout << '\n';
		}
	}	
}
