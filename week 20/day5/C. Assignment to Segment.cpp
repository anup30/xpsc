// C. Assignment to Segment, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int n, m;
	cin >> n >> m;	
	vector<int> ar(n,0);
	while(m--){
		int t;
		cin >> t;
		if(t==1){
			int l, r, v;
			cin >> l >> r >> v;
			for(int i=l; i<r; i++){
				ar[i]=v;
			}
		}
		else{
			int id;
			cin >> id;
			cout << ar[id] << endl;
		}
	}
}
