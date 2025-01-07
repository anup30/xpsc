// C - Wooden Toy Festival, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		int n;
		cin >> n;
		vector<int> v(n);
		for(int i=0; i<n; i++) cin >> v[i];
		sort(v.begin(), v.end());
		int l=0, r=1e9;
		while(l<r){
			int mid = l+(r-l)/2, i=0, j=n-1;
			while(i<n-1 && v[i+1]-v[0] <= 2*mid) i++;
			i++;
			while(j>1 && v[n-1]-v[j-1] <=2*mid) j--;			
			j--;
			if(i>j||v[j]-v[i]<=2*mid)r=mid;
			else l=mid+1;
		}
		cout << l << endl;
	}
}

/*
5
6
1 7 7 9 9 9
6
5 4 2 1 30 60
9
14 19 37 59 1 4 4 98 73
1
2
6
3 10 1 17 15 11

0
2
13
0
1
*/