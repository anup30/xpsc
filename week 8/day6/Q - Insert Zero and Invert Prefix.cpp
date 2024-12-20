// Q - Insert Zero and Invert Prefix, Accepted
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
		vector<int> v(n), b, cons;	// consecutive count
		for(int i=0; i<n; i++) cin >> v[i];
		if(v[n-1]==1){
			cout << "NO\n";
			continue;
		}	
		cout << "YES\n";
		int cur=1;
		for(int i=n-1; i>=1; i--){
			if(v[i]==v[i-1]) cur++;
			else{
				cons.push_back(cur);
				cur=1;
			}
		}
		cons.push_back(cur);
		//cout << "cons = ";
		//for(int i:cons) cout << i << " ";
		//cout << endl;
		int sz = cons.size();
		for(int i=0; i<sz; i+=2){ // cons[even] == 0 counts
			if(i+1<sz){
				for(int j=0; j<cons[i]-1; j++) cout << "0 ";
				for(int j=0; j<cons[i+1]; j++) cout << "0 ";
				cout << cons[i+1] << " ";
			}
			else{
				for(int j=0; j<cons[i]; j++) cout << "0 ";				
			}
		}
		cout << endl;
	}
}

/*
4
5
1 1 0 0 0
1
1
3
0 1 1
6
1 0 0 1 1 0

YES
0 0 2 1 3
NO
NO
YES
0 1 0 2 4 2
*/