// K - Tear It Apart, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		string s;
		cin >> s;
		int sz = s.size();
		int mn=sz, cur=0, cnt=0;		
		for(char c='a'; c<='z'; c++){					
			cur=0;
			cnt=0;
			for(int i=0; i<sz; i++){				
				if(s[i]==c){					
					cnt=0;
				}
				else{
					cnt++;
				}
				cur = max(cur,cnt);				
			}
			mn=min(mn, cur);
		}
		//cout << mn << endl;
		int div=mn;
		int ans=0;
		while(div>0){
			div /= 2;
			ans++;
		} 
		cout << ans << endl; //
	}
}

/*
5
abacaba
codeforces
oooooooo
abcdef
mewheniseearulhiiarul

1
3
0
2
4
*/
