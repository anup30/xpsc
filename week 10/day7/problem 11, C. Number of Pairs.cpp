// C. Number of Pairs, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		int n, l, r;
		cin >> n >> l >> r;
		vector<int> v(n);
		for(int i=0; i<n; i++) cin >> v[i];
		sort(v.begin(), v.end());
		ll cnt=0;
		for(int i=0; i<n; i++){
			if(v[i]<r){
				int mn = l-v[i], mx = r-v[i];			
				auto it1 = lower_bound(v.begin(), v.end(), mn);
				int idx1 = it1 - v.begin();
				idx1 = max(idx1, i+1);				
				auto it2 = upper_bound(v.begin(), v.end(), mx);
				int idx2 = it2-v.begin();
				//cout << "tst " << i << " " << v[i] << ", " << idx2  << "-" << idx1 << endl;
				//if(v[i]<l) cnt += (idx2-idx1);
				//else cnt+= (idx2-i);
				if(idx2>idx1) cnt += (idx2-idx1);
			}			
		}
		cout << cnt << endl;	
	}
}

/*
4
3 4 7
5 1 2
5 5 8
5 1 2 4 3
4 100 1000
1 1 1 1
5 9 13
2 5 5 1 1

2
7
0
1
*/