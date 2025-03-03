// D - Satisfying Constraints, Accepted
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
		int mn = INT_MAX, mx=-1;
		set<int> st;
		for(int i=0; i<n; i++){
			int a, x;
			cin >> a >> x;
			if(a==1){
				mx = max(mx, x);
			}
			else if(a==2){
				mn = min(mn, x);
			}
			else st.insert(x);
		}
		if(mn<mx){
			cout << 0 << endl;		
		}
		else if(mn==mx){
			if(st.count(mn) == 0) cout << 1 << endl;
			else cout << 0 << endl;
		}
		else{ // mx<mn
			int cnt=0;
			for(int x:st) if(x>=mx && x<=mn) cnt++;
			cout << mn-mx+1-cnt << endl;
		}
	}
}
