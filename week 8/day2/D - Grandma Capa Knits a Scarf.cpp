// D - Grandma Capa Knits a Scarf, Accepted
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
		int cnt = n+1;
		for(char c='a'; c<='z'; c++){	
			int tc=0, l=0, r=n-1;
			while(l<=r){
				if(s[l]==s[r]){
					l++;
					r--;
				}
				else if(s[l]==c){
					tc++;
					l++;
				}
				else if(s[r]==c){
					tc++;
					r--;
				}
				else{
					tc=n+1;
					break;
				}
			}			
			cnt = min(cnt, tc);		
		}	
		if(cnt>n) cout << -1 << endl;
		else cout << cnt << endl;
	}
}

/*
5
8
abcaacab
6
xyzxyz
4
abba
8
rprarlap
10
khyyhhyhky

2
-1
0
3
2
*/