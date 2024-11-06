// week 2, Topicwise Problem 10, Accepted
// C. Numbers on Whiteboard
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t = 1;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> v(n);
		vector<pair<int,int>> vp;
		for(int i=0; i<n; i++){
			v[i] = i+1;
		}
		int x,y;
		while(v.size()>=2){
			x= v.back();
			v.pop_back();
			y=v.back();
			v.pop_back();
			//cout << x << " " << y << endl;
			vp.push_back({x,y});
			int k = ceil((x+y)/2.0);
			//cout << "k= " << k<< endl;
			v.push_back(k);			
		}
		cout << v.front() << endl;
		for(auto x:vp) cout<< x.first << " " << x.second << endl;
	}
	return 0;
}
