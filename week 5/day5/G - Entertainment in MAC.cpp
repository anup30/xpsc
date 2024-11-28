// G - Entertainment in MAC, Accepted
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);	
	
	int t=1;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		string s="abc";
		cin >> s;
		string r = s;
		reverse(r.begin(), r.end());
		if(s<=r) cout << s << endl;
		else cout << r+s << endl;
		
	}
}
