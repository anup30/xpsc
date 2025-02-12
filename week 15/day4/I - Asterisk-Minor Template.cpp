// I - Asterisk-Minor Template, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc;
	cin >> tc;
	while (tc--){
		string a, b;
		cin >> a >>  b;
		bool printed=false;
		int al= a.size(), bl=b.size();
		if(a[0]==b[0]){
			cout << "YES" << endl;
			cout << a[0] << '*' << endl;	
			printed=true;		
		}	
		else if(a[al-1]==b[bl-1]){
			cout << "YES" << endl;
			cout << '*' << a[al-1] << endl;
			printed=true;
		}
		else{	
			for(int i=0; i<al-1; i++){
				for(int j=0; j<bl-1; j++){
					if((a[i]==b[j])&&(a[i+1]==b[j+1])){											
						cout << "YES" << endl;
						cout << '*' << a[i] << a[i+1]<< '*' << endl;
						printed=true;
						break;
					}
				}
				if(printed) break;
			}
			if(!printed) cout << "NO" << endl;
		}	
	}
}

/*
6
aaab
zzzb
codeforces
atcoder
codeforces
tokitlx
aaaa
aaaaaa
abcd
abcd
c
f

YES
*b
YES
*co*
NO
YES
a*a*a*a
YES
abcd
NO
*/
