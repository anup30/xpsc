// C - Restaurant Customers, Accepted
// difference array technique
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int n;
	cin >> n;
	vector<pair<int, int>> pa;
	int s, e;
	for(int i=0; i<n; i++){
		cin >> s >> e;
		pa.push_back({s,1});
		pa.push_back({e,-1});
	}	
	sort(pa.begin(), pa.end());
	int cur=0, mx=0;
	for(int i=0; i<2*n; i++){
		cur += pa[i].second;
		mx = max(mx, cur);
	}
	cout << mx << endl;
}

/*
3
5 8
2 4
3 9

2
*/