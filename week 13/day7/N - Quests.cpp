// N - Quests, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool canIt(vector<ll> &v, ll n, ll c, ll d, ll gap){
	ll sum=0;
	ll mn= min({n, d, gap+1});
	for(int i=0; i<mn; i++){		
		ll num = 1+(d-(i+1))/(gap+1);		
		sum += num*v[i];
	}
	return sum >= c;
}

int main() {	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		ll n, c, d;
		cin >> n >> c >> d;
		vector<ll> v(n);
		for(int i=0; i<n; i++) cin >> v[i];
		sort(v.rbegin(), v.rend());
		if(v[0]*d <c){
			cout << "Impossible" << endl;
			continue;
		}
		ll cum=0, d2=d, j=0;
		while(d2-- && j<n){
			cum += v[j++];
		}
		if(cum>=c){
			cout << "Infinity" << endl;
			continue;
		}				
		if(!canIt(v,n,c,d,1LL)){
			cout << 0 << endl;
			continue;
		}	
		
		ll l=1, r=1,ans=0;
		//r=1e12;
		while(canIt(v,n,c,d,r)) r *=2;  // overflow ?		
		while(l<=r){
			ll mid = l+(r-l)/2;
			if(canIt(v,n,c,d,mid)){
				ans=mid;
				l=mid+1;
			}
			else{
				r=mid-1;
			}
		}
		cout << ans << endl;		
	}
}


/*
6
2 5 4
1 2
2 20 10
100 10
3 100 3
7 2 6
4 20 3
4 5 6 7
4 100000000000 2022
8217734 927368 26389746 627896974
2 20 4
5 1

2
Infinity
Impossible
1
12
0
*/