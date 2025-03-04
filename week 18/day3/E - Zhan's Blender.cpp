// E - Zhan's Blender, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		int n, x, y;
		cin >> n;
		cin >> x >> y;
		int z= min(x,y);		
		cout << n/z + min(1, n%z) << endl;
	}
}
