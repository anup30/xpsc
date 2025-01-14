// C - Mystic Permutation, Accepted
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
		vector<int> a(n), b(n,0);
		set<int> st;
		for(int i=0; i<n; i++){
			cin >> a[i];
			st.insert(a[i]);
		} 		
		if(n==1){
			cout << "-1\n";
			continue;
		}
		for(int i=0; i<n; i++){
			auto it = st.begin();
			if(a[i] != *it){
				auto it2=st.begin();
				if((++it2) == --st.end() && *st.rbegin()==a[n-1]){
					b[i]= *st.rbegin();
					st.erase(--st.end());
				}
				else{
					b[i]= *it;
					st.erase(it);
				}			
			}
			else{
				it++;
				b[i]= *it;			
				st.erase(it);
			}
		}
		for(int i:b) cout << i << " ";
		cout << endl;
	}
}


/*
4
3
1 2 3
5
2 3 4 5 1
4
2 3 1 4
1
1

2 3 1
1 2 3 4 5
1 2 4 3
-1
*/