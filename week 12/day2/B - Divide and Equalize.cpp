// B - Divide and Equalize (used prime factors), Accepted
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
		vector<int> v(n);
		map<int, int> mp;
		for(int i=0; i<n; i++) cin >> v[i];
		for(int i=0; i<n; i++){
			int k = v[i];
			while(k%2==0 && k>0){
				k /= 2;
				mp[2]++;
			}
			for(int j=3; j<=sqrt(k); j++){
				while(k%j==0 && k>0){
					k /= j;
					mp[j]++;
				}
			}
			if(k>1) mp[k]++;		
		}	
		auto it= mp.begin();
		bool b=true;
		while(it!=mp.end()){
			if(it->second%n != 0){				
				b=false;
				break;
			}
			it++;
		}
		if(b) cout << "YES\n";
		else cout << "NO\n";		
	}
}

/*
5
100 2 50 10 1

2=2,1,1,1
5=2,2,1
*/

/*
7
5
100 2 50 10 1
3
1 1 1
4
8 2 4 2
4
30 50 27 20
2
75 40
2
4 4
3
2 3 1

YES
YES
NO
YES
NO
YES
NO
*/