// G - The Legend of Freya the Frog, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		int x, y, k;
		cin >> x >> y >> k;
		
		int p = x/k;
		if(x%k) p++;
		int q = y/k;
		if(y%k) q++;
		if(q>=p){
			cout << 2*q << endl;
		}
		else{
			cout << 2*p-1 << endl;
		}		
	}
}
