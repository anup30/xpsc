// week 2, Topicwise Problem 11, Accepted
// B2. The Strict Teacher (Hard Version)
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t = 1;
	cin >> t;
	while(t--){
		int n, m, q;
		cin >> n >> m >> q;
		vector<int> v(m);
		for(int i=0; i<m; i++){
			cin >> v[i];
		}
		sort(v.begin(), v.end());
		int david;
		while(q--){
			cin >> david;
			int idx = upper_bound(v.begin(), v.end(), david) -v.begin(); // iterator - begin -> int index
			if(idx==0) cout << v[idx]-1 << endl;
			else if(idx==m) cout << n-v[idx-1] << endl; // idx-1, 1 before end()
			else cout << (v[idx] - v[idx-1])/2 << endl;		
			/* // this version tle test 7
			if(david<v.front()){
				cout << v.front()-1 << endl;
			}
			else if(david>v.back()){
				cout << n- v.back() << endl;
			}
			else{
				int k=0;
				while(v[k]<david){k++;}
				//cout << v[k] << "-" << v[k-1] << endl;
				cout << (v[k]-v[k-1])/2 << endl;				
			}
			*/
		}
	}
	return 0;
}
