// Topicwise Problem 6 // accepted
// B. YetnotherrokenKeoard

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t = 1;
	cin >> t;
	while (t--) {
		string s; 
		//s = "ARaBbbitBaby";
		cin >> s;
		int len = s.size();
		stack<int> capital, small;
		map<int, char> mp;
		for(int i=0; i<len; i++){
			if(s[i]=='b'){
				if(!small.empty()){
					mp.erase(small.top());
					small.pop();
				}
			}
			else if(s[i]=='B'){
				if(!capital.empty()){
					mp.erase(capital.top());
					capital.pop();
				}
			}
			else if(s[i]>='a' && s[i]<='z'){
				small.push(i);
				mp[i] = s[i];
			}
			else if(s[i]>='A' && s[i]<='Z'){
				capital.push(i);
				mp[i] = s[i];
			}
		}
		for(auto x:mp) cout << x.second;
		cout << '\n';
	}
}
