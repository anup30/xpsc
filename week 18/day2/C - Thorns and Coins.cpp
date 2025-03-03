// C - Thorns and Coins, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		int n;
		cin >> n;
		string s;
		cin >> s;
		s+= '*';
		int cnt=0;
		bool end=false;
		for(int i=0; i<n; i++){
			if(s[i]=='@') cnt++;			
			if(s[i]=='*' && s[i+1] == '*'){
				break;
			}
		}
		cout << cnt << endl;
	}
}
