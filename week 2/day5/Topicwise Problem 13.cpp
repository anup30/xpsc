// week 2, Topicwise Problem 13, Accepted
// C. Update Queries
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t = 1;
	cin >> t;
	while(t--){
		int n,m,k;
		cin >> n >> m;
		string s; // n length
		cin >> s;
		set<int> ind;
		for(int i=1; i<=m; i++){
			cin >> k;
			ind.insert(k);
		}		
		string c; // m length
		cin >> c;
		sort(c.begin(), c.end());
		int cnt=0;
		for(int i:ind){
			s[i-1] = c[cnt++];
		}	
		cout << s << endl;	
	}
	return 0;
}
