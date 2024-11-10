// A - Chess Olympiad, accepted
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);	
	
	int w, d, l, rem;
	cin >> w >> d >> l;
	rem = 4 -(w+d+l);
	if(w+rem > l) cout << "YES\n";
	else cout << "NO\n";	
}