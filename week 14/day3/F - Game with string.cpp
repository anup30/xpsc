// F - Game with string, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	string s;
	cin >> s;
	stack<char> st;
	st.push('-');
	int sz = s.size();
	char last;
	int cnt =0;
	for(int i=0; i<sz; i++){
		last = st.top();
		if(s[i] != last){
			st.push(s[i]);
		}
		else{
			cnt++;
			st.pop();
		}
	}
	if(cnt%2==1) cout << "Yes" << endl;
	else cout << "No" << endl;
}
