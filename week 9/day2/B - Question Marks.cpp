// B - Question Marks, Accepted
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
		int a=0, b=0, c=0, d=0;
		for(int i=0; i<4*n; i++){
			if(s[i]=='A') a++;
			else if(s[i]=='B') b++;
			else if(s[i]=='C') c++;
			else if(s[i]=='D') d++;
		}
		a = min(a, n);
		b = min(b,n);
		c = min(c, n);
		d = min(d,n);
		cout << a+b+c+d << endl;
	}
}
