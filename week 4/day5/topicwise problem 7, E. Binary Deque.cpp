// E. Binary Deque, Accepted
// https://codeforces.com/problemset/problem/1692/E
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);	
	
	int t=1;
	cin >> t;
	while(t--){
		int n, s;
		cin >> n >> s;
		vector<int> v(n), idx;
		for(int i=0; i<n; i++){
			cin >> v[i];
			if(v[i]==1) idx.push_back(i);
		}
		int ones = idx.size();	
		if(ones<s){
			cout << -1 << endl;
			continue;
		}
		else if(ones==s){
			cout << 0 << endl;
			continue;
		}
		int left=0, right=s-1, count=n, tmp;
		while(right<=ones-1){
			tmp = idx[left] + (n-1-idx[right]);
			if(left>0){
				tmp -= (idx[left]-idx[left-1]-1);
			}
			if(left==0){
				tmp -= idx[left];
			}
			if(right==ones-1){
				tmp-= (n-1-idx[right]);
			}
			if(right<ones-1){
				tmp -= (idx[right+1] - idx[right] -1);
			}
			if(tmp<count) count = tmp;
			left++;
			right++;
		}
		cout << count << endl;
	}
}

/*
7
3 1
1 0 0
3 1
1 1 0
9 3
0 1 0 1 1 1 0 0 1
6 4
1 1 1 1 1 1
5 1
0 0 1 1 0
16 2
1 1 0 0 1 0 0 1 1 0 0 0 0 0 1 1
6 3
1 0 1 0 0 0


0
1
3
2
2
7
-1
*/