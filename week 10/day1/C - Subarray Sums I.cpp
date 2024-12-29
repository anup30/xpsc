// C - Subarray Sums I, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);		
	
	ll n, x;
	cin >> n >> x;
	vector<ll> v(n);
	for(int i=0; i<n; i++) cin >> v[i];
	ll l=0, r=0, cum=0, cnt=0;
	
	while(r<n){
		cum+=v[r++];
		if(cum==x) cnt++;
		while(cum<x && r<n){
			cum+=v[r++];
			if(cum==x) cnt++;
		}		
		while(cum>x && l<=r){
			cum-= v[l++];
			if(cum==x) cnt++;
		}				
	}
	cout << cnt << endl;	
}

/*
5 7
1 4 2 2 7
3


5 4
4 4 4 4 4
5
*/