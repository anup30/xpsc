// F. Money Trees, Accepted
// https://codeforces.com/problemset/problem/1873/F
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);	
	
	int t=1;
	cin >> t;
	while(t--){		
		ll n, k;
		cin >> n >> k;
		vector<ll> a(n), h(n);
		for(int i=0; i<n; i++) cin >> a[i];
		for(int i=0; i<n; i++) cin >> h[i];		
		ll left=0, right=1, cum=a[0], count=0; // sum a[i] <= k
		if(a[0]<=k) count =1;
		while(right<n){			
			if(h[right-1]%h[right] >0){
				cum=0;
				left=right;
			}
			cum += a[right++];		
			while(cum>k) cum -= a[left++];			
			count = max(count, right-left);
		
		}
		cout << count << endl; 		
	}
}

/*
5
5 12
3 2 4 1 8
4 4 2 4 1
4 8
5 4 1 2
6 2 3 1
3 12
7 9 10
2 2 4
1 10
11
1
7 10
2 6 3 1 5 10 6
72 24 24 12 4 4 2


3
2
1
0
3
*/