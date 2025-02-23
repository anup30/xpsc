// B - Arranging Cats, Accepted
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
		string s, f;
		cin >> s >> f;
		int s1=0, f1=0;
		for(int i=0; i<n; i++){
			if(s[i]==f[i]) continue;
			if(s[i]=='1') s1++;
			else f1++;
		}
		//int mn= min(s1, f1), mx = max(s1, f1);
		//cout << (mx-mn)+mn << endl;
		cout << max(s1, f1) << endl;
	}
}
