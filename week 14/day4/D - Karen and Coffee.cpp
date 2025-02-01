// D - Karen and Coffee, Accepted
// difference array
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int n, k, q, l, r;
	cin >> n >> k >> q;
	int size= 2e5+2;
	vector<int> dif(size,0);
	for(int i=0; i<n; i++){
		cin >> l >> r;
		dif[l]++;
		dif[r+1]--;
	}
	for(int i=1; i<size; i++){
		dif[i] += dif[i-1]; 
	}
	vector<int> ar(size,0);
	int j=0;
	for(int i=0; i<size; i++){
		if(dif[i]>=k) j++;
		ar[i] = j;
	}
	for(int i=0; i<q; i++){
		cin >> l >> r;
		cout << ar[r]- ar[l-1] << endl;
	}
}

/*
3 2 4
91 94
92 97
97 99
92 94
93 97
95 96
90 100

3
3
0
4
*/