// B. Segment with Big Sum, Accepted
// smallest subsection where sum >= s
#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);	
	
	ll n, s;
	cin >> n >> s;
	vector<int> v(n);
	for (int i=0; i<n; i++) cin >> v[i];
	ll left = 0, right = 0, count = n+1, cum = v[0];
	
	while(right<n){	
		if(cum>=s){
			count = min(count, right-left+1);
			cum -= v[left];
			left++;
			if(count==1) right=n; // break
		}
		else{
			right++;
			if(right<n) cum += v[right];				
		}
	}	
	if(count>n) cout << -1 << endl;
	else cout << count << endl;
}
 
/*
7 20
2 6 4 3 6 8 9
 
3
*/