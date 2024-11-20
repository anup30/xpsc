// D. Number of Segments with Big Sum, Accepted
// find the number of good segments where sum >= s
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
	ll left = 0, right = 0, count = 0, cum = 0;
	
	while(right<n){
		cum += v[right];
		while(cum>=s){
			count+= n-right; // 1+ elements right to right = 1+ (n-1-right);
			cum -= v[left++];
		}
		right++;
	}	
	cout << count << endl;
}

/*
7 20
2 6 4 3 6 8 9

9
*/