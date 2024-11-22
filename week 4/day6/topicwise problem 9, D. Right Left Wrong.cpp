// D. Right Left Wrong, Accepted
// https://codeforces.com/contest/2000/problem/D
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
		vector<ll> v(n), psum(n+1, 0);
		for(int i=0; i<n; i++) cin >> v[i];
		string s;
		cin >> s;				
		for(int i=1; i<=n; i++) psum[i] = psum[i-1] + v[i-1];
		ll left=0, right = n-1, count =0;
		while(left<right){
			while(left<n && s[left]=='R'){				
				left++;
			}			
			while(0<=right && s[right]=='L'){				
				right--;
			}
			if(left<right){
				count += psum[right+1] - psum[left];
				left++;
				right--;		
			}				
		}
		cout << count << endl;
	}
}

/*
4
6
3 5 1 4 3 2
LRLLLR
2
2 8
LR
2
3 9
RL
5
1 2 3 4 5
LRLRR


18
10
0
22
*/