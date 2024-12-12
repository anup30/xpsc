// B. Rock and Lever, Accepted
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
		for(int i=0; i<n; i++) cin >> v[i];		
		vector<bool> b(n,false);
		ll sum=0;
		for(int i=31; i>=0; i--){
			ll num=0;
			for(int j=0; j<n; j++) 
				if((1<<i) &(v[j]) && !b[j]) num++;
			if(num){
				for(int j=0; j<n; j++)
					if((1<<i)&(v[j]) && !b[j]) b[j] = true;
				sum+= (num*(num-1))/2;	
			}	
		}
		cout << sum << endl;
	}
}

/*
5
5
1 4 3 7 10
3
1 1 1
4
6 2 5 3
2
2 4
1
1


1
3
2
0
0
*/