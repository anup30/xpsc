// B. Tavas and SaDDas, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int n; 
	cin >> n;
	string s = to_string(n);
	int len = s.size();
	ll cnt= 0;
	for(int i=1; i<len; i++) cnt += (1<<i);	
	for(int i= len-1, tmp=0; i>=0; i--, tmp++) if(s[i]=='7') cnt += (1<<tmp);	
	cout << cnt+1 << endl;
}


/*
4 7 44 47 74 77 444 447
*/