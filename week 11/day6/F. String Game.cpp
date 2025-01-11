// F. String Game, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool is_subsequence(string &s, string &t){
	int a = s.size();
	int b = t.size();
	int j = 0;
	for(int i=0; i<a && j<b; i++)
		if(s[i]==t[j]) j++;	
	return (j==b);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	string s1, s2;
	cin >> s1 >> s2;
	int n1 = s1.size();
	vector<int> v(n1);
	for(int i=0; i<n1; i++) cin >> v[i];
	
	int l=0, r=n1-1, ans=0;
	while(l<=r){
		int mid = l+(r-l)/2;		
		string tmp = s1;
		for(int i=0; i<=mid; i++) tmp[v[i]-1] = '0';		
		if(is_subsequence(tmp,s2)){			
			l=mid+1;
			ans=mid+1;
		}
		else{			
			r=mid-1;
		}		
	}
	cout << ans << endl;
}

/*
ababcba
abb
5 3 4 1 7 6 2

3
*/