// F - BAN BAN, Accepted
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);	
	
	int t=1;
	cin >> t;
	while(t--){
		int n;
		cin >> n; 
		int left = 1;
		int right = n*3;
		vector<pair<int, int>> pa;
		// "BANBANBAN"
		while(left<right){
			pa.push_back({left, right});
			left += 3;
			right -= 3;
		}
		cout << pa.size() << endl;
		for(auto x: pa) cout << x.first << " " << x.second << endl;
	}	
}