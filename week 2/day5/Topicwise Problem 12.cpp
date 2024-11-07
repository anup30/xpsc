// week 2, Topicwise Problem 12, Accepted
// C. Traffic Light
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t = 1;
	cin >> t;
	while(t--){
		int n; cin >> n;
		char c; cin >> c;		
		string s, s2;
		cin >> s;
		if(c=='g'){
			cout << 0 << endl;
			continue;
		}
		s2 = s+s;
		vector<int> vc, vg;
		for(int i=0; i<n; i++){
			if(s[i]==c) vc.push_back(i);
		}
		for(int i=0; i<2*n; i++){
			if(s2[i]=='g') vg.push_back(i);
		}
		int mx=0;
		for(int i=0; i<vc.size(); i++){
			auto it = upper_bound (vg.begin(), vg.end(), vc[i]);
			int dis = *it - vc[i];
			if(dis>mx) mx = dis;
		}
		cout << mx << endl;
	}
	return 0;
}
