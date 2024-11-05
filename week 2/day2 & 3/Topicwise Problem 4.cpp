// week 2, Topicwise Problem 4, Accepted
// C. Train and Queries
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t=1;	
	cin >> t;
	while(t--){
		int n, k;
		cin >> n>> k;
		vector<int> v(n);
		map<int, vector<int>> mp;
		for(int i=0; i<n; i++){
			cin >> v[i];
			mp[v[i]].push_back(i);
		}
		/*
		for(auto x:mp){
			cout<< "\nkey: " << x.first << " \nvalues: ";
			for(auto y: x.second) cout << y << " "; // x.second.front(), x.second.back(),
			cout << endl;
		}
		*/
		int a, b;
		for(int i=0; i<k; i++){
			cin >> a >> b;
			auto ia = mp.find(a);
			auto ib = mp.find(b);
			if(ia == mp.end() || ib == mp.end()){
				cout << "NO\n";				
			}
			else{
				if(ia->second.front() <ib->second.back()){
					cout<< "YES\n";
				}
				else{
					cout << "NO\n";
				}
			}
		}		
	}	
}

/*
3

6 3
3 7 1 5 1 4
3 5
1 7
3 10
*/