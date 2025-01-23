// C - Prefiquence, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int subsequence(string &s, string &t){
	int l1 = s.size();
	int l2 = t.size();
	int j = 0;
	for(int i=0; i<l1 && j<l2; i++)
		if(s[i]==t[j]) j++;	
	return j;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		int n, m;
		cin >> n >> m;
		string a, b;
		cin >> a >> b;
		int ans = subsequence(b, a);
		cout << ans << endl;
	}
}
