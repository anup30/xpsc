// E - K-th Not Divisible by n, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		int n, k;
		cin >> n >> k;		
		cout << k+ (k-1)/(n-1) << endl;
	}
}

/*
6
3 7
4 12
2 1000000000
7 97
1000000000 1000000000
2 1

10
15
1999999999
113
1000000001
1
*/