// I - Plus Minus Permutation, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll gcd(ll a, ll b){ 
	return b == 0 ? a : gcd(b, a % b); 
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc;
	cin >> tc;
	while (tc--){
		ll n, x, y;
		cin >> n >> x >> y;	
	
		ll gc = gcd(x,y);
		ll lc = x*y/gc;		
		lc = (n/lc);	
		x = (n/x)-lc;		
		y = (n/y)-lc;
		
		x= n*x -x*(x-1)/2;	
		y = y*(y+1)/2;	
		cout << x-y << endl;
	}
}

/*
8
7 2 3
12 6 3
9 1 9
2 2 2
100 20 50
24 4 6
1000000000 5575 25450
4 4 1

12
-3
44
0
393
87
179179179436104
-6
*/

