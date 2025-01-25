// G - Snow Walking Robot, Accepted
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
		int l=0, r=0, u=0, d=0;
		for(char c:s){
			if(c=='L') l++;
			else if(c=='R') r++;
			else if(c=='U') u++;
			else if(c=='D') d++;
		}
		string res="";
		if(l==0 || r==0){
			if(u>0 && d>0){
				res= "UD";
			}
			cout << res.size() << endl;
			cout << res << endl;
		}
		else if(u==0 || d==0){
			if(l>0 && r>0){
				res= "LR";
			}
			cout << res.size() << endl;
			cout << res << endl;
		}
		else{
			int h1, h2, v1, v2;
			h1 = h2 = min(l,r);		
			v1 = v2 = min(u,d); 
			while(h1--) res += 'L';
			while(v1--) res += 'U';
			while(h2--) res += 'R';
			while(v2--) res += 'D';
			cout << res.size() << endl;
			cout << res << endl;
		}
	}
}
