// C. Number of Equal, Accepted
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);	
	
	int n, m, k;
	cin >> n >> m;
	map<ll, ll> a,b;
	for(int i=0; i<n; i++){
		cin >> k;
		a[k]++;
	}
	for(int i=0; i<m; i++){
		cin >> k;
		b[k]++;
	}
	long long total=0;
	for(auto x:a){		
		total += x.second * b[x.first];
	}
	cout << total << endl;
}