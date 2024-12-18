// J - Swap and Delete, Accepted
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
		int o=0, z=0, del=0;
		for(int i=0; i<sz; i++){
			if(s[i]=='0') z++;
			else o++;
		}
		for(int i=0; i<sz; i++){
			if(s[i]=='0'){
				if(o>0) o--;
				else break;
			}
			else{
				if(z>0) z--;
				else break;
			}
		}
		cout << z + o << endl;
	}
}

/*
4
0
011
0101110001
111100

1
1
0
4
*/