// I - Binary Inversions, Accepted
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
		vector<int> v(n), zero, one;
		for(int i=0; i<n; i++){
			cin >> v[i];
			if(v[i]==0) zero.push_back(i);
			else one.push_back(i);
		} 		
		int k=0;
		ll sum=0;
		for(int i=0; i<n; i++){
			if(v[i]==1) k++;
			else sum += k;
		}
		if(one.size()==0 || zero.size()==0){
			cout << n-1 << endl;
			continue;
		}
		ll tmp0 =0, tmp1=0;
		tmp0 += zero.size()-1;
		for(int i=0; i<one.size() && i<zero[0]; i++){
			if(one[i]<zero[0]) tmp0--;			
		}
		tmp1 += one.size()-1;
		for(int i=0; i<zero.size(); i++){
			if(zero[i]> one.back()) tmp1--;			
		};
		ll mx = max(tmp1, tmp0);
		if(mx>0) sum += mx;
		cout << sum << endl;
	}
}

/*
5
4
1 0 1 0
6
0 1 0 0 1 0
2
0 0
8
1 0 1 1 0 0 0 1
3
1 1 1

3
7
1
13
2
*/