// B. Long Long, Accepted
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t=1;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		vector<ll> v(n);
		for(ll i=0; i<n; i++) cin >> v[i];
		ll sum = 0, c = 0, i=0;		
		while(i<n){
			if(v[i]>0) i++;
			else{
				bool added = false;				
				while(i<n && v[i]<=0){ 
					if(v[i]<0 && !added){
						c++; // section
						added=true;
					}
					i++; 
				}
			}
		}		
		for(ll x:v) sum += abs(x);
		cout <<  sum << " " << c << endl;
	}
}

/*
5
6
-1 7 -4 -2 5 -8
8
-1 0 0 -2 1 0 -3 0
5
2 -1 0 -3 -7
5
0 -17 0 1 0
4
-1 0 -2 -1
*/