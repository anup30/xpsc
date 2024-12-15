// A - String Game, Accepted
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
		int tmp =0;
		for(int i=0; i<n; i++) if(s[i]=='1') tmp++;
		tmp = min(tmp, n-tmp);
		if(tmp%2==1) cout << "Zlatan\n";
		else cout<< "Ramos\n";
	}
}
