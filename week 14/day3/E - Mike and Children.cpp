// E - Mike and Children, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int n;
	cin >> n;
	vector<int> v(n);
	for(int i=0; i<n; i++) cin >> v[i];
	sort(v.begin(), v.end());
	int mx=0, cur=0;
	for(int i=0; i<n-1; i++){		
		for(int j=n-1; j>i; j--){
			cur = v[i] +v[j];
			int l=i+1, r=j-1;
			int cnt=1;
			while(l<r){
				if(cur == v[l]+v[r]){					
					cnt++;
					l++;
					r--;
				}
				else if(cur < v[l]+v[r]) r--;				
				else if(cur > v[l]+v[r]) l++;				
			}
			mx = max(mx,cnt);			
		}
	}
	cout << mx << endl;	
}


/*
20
1 3 6 7 8 10 12 13 15 18 20 22 23 26 34 38 43 47 48 49

5
56
7 8 13 18 22
*/