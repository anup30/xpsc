// E - Mark the Dust Sweeper, Accepted
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);	
	
	int t=1;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		ll sum = 0;
		vector<ll> v(n);	
		for(int i=0; i<n; i++){
			cin >> v[i];
			if(i != n-1) sum += v[i];
		} 
		int i=0;
		while(i<n){
			if(v[i]>0) break;
			i++;
		}	
		while(i<n-1){
			if(v[i]==0) sum++;
			i++;
		}
		cout << sum << endl;	
	}	
}

/*
4
3
2 0 0
5
0 2 0 2 0
6
2 0 3 0 4 6
4
0 0 0 10


3
5
11
0
*/