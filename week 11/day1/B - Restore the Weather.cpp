// B - Restore the Weather, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool comp(pair<int,int> a, pair<int,int> b){
	return a.first<b.first; // runtime error for <= use
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=2;
	cin >> tc;
	while (tc--){
		int n, k;
		cin >> n >>k;
		vector<int> a(n), b(n), c(n,0);
		for(int i=0; i<n; i++) cin >> a[i];
		for(int i=0; i<n; i++) cin >> b[i];
		vector<pair<int, int>> a2(n), b2(n);
		for(int i=0; i<n; i++){
			a2[i] = {a[i], i};
			b2[i] = {b[i], i};
		}
		sort(a2.begin(), a2.end(), comp); // will sort without comp, according to first value of pair.
		sort(b2.begin(), b2.end(), comp);		
		for(int i=0; i<n; i++){
			c[a2[i].second] = b2[i].first;
		}
		for(int i=0; i<n; i++) cout << c[i] << " ";
		cout << endl;
	}
}

/*
3
5 2
1 3 5 3 9
2 5 11 2 4
6 1
-1 3 -2 0 -5 -1
-4 0 -1 4 0 0
3 3
7 7 7
9 4 8

2 2 5 4 11
0 4 -1 0 -4 0
8 4 9
*/