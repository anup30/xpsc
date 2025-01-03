// G - Sum of Three Values, Accepted
// time complexity: O(n^2 * log(n))
#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool comp(pair<ll,int> a, pair<ll,int> b){
	return a.first<b.first;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	ll n, x, tmp, sum=0;
	cin >> n >> x;
	vector<pair<ll, int>> v(n+1);
	v[0] = {0,0};
	bool found= false;
	for(int i=1; i<=n; i++){
		cin >> tmp;
		v[i] = {tmp, i};
	}
	sort(v.begin()+1, v.end(), comp);	
	for(int i=1; i<=n; i++){		
		for(int j=i+1; j<=n; j++){
			ll cum = v[i].first + v[j].first;
			ll rem = x-cum;			
			int l=j+1, r=n;
			while(l<=r){ // binary search
				int mid = l+(r-l)/2;
				if(v[mid].first == rem){
					found=true;
					cout << v[i].second << " " << v[j].second << " " << v[mid].second << endl;
					break;
				}
				else if(v[mid].first < rem) l=mid+1;
				else if(v[mid].first > rem) r=mid-1;
			}
			if(found) break;
		}
		if(found) break;
	}
	if(!found) cout << "IMPOSSIBLE\n";
}

/*
3 6
1 3 2

1 3 2
*/