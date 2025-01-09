// F - Equalize, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		int n, k;
		cin >> n;
		vector<int> v;
		set<int> st;
		for(int i=0; i<n; i++){
			cin >> k;
			st.insert(k);
		}
		auto it = st.begin();
		while(it != st.end()){
			v.push_back(*it);
			it++;
		}
		int sz = v.size(), mx=0;		
		/* // tle test 3
		for(int i=0; i<sz; i++){
			int cnt=0;
			int j=i;
			while(j<sz && v[j]-v[i] <n){
				cnt++;
				j++;
			} 
			mx = max(mx, cnt);
		}
		cout << mx << endl;
		*/
		int l=0, r=0, cnt=0;
		while(r<sz){ // sliding window
			while(r<sz && v[r]-v[l]<n) r++;
			cnt = r-l;			
			mx = max(mx, cnt);
			if(r>=sz) break;
			while(v[r]-v[l]>=n) l++;			
		}
		cout << mx << endl;
	}
}


/*
5
1 6 9 10 16

*/

/*
7
2
1 2
4
7 1 4 1
3
103 102 104
5
1 101 1 100 1
5
1 10 100 1000 1
2
3 1
3
1000000000 999999997 999999999

2
2
3
2
1
1
2
*/