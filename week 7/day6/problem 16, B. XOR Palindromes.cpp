// B. XOR Palindromes, Accepted
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
		string t(n+1,'0');
		int cnt =0;   
		int l=0, r=n-1;
		bool odd = n%2==0?false:true;
		while(l<r){
			if(s[l]!=s[r]) cnt++;
			l++;
			r--;
		}
		int rem = cnt>0?n-2*cnt:n;			
		for(int i=cnt; rem>=0 ;i+=2,rem-=2){
			t[i] = '1';
			if(odd && i+1<=n)t[i+1]='1';		
		}		
		cout << t << endl;
	}
}

/*
5
6
101011
5
00000
9
100100011
3
100
1
1

0010100
111111
0011111100
0110
11
*/