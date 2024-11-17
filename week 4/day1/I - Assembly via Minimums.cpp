// I - Assembly via Minimums, Accepted
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t=1;
	cin >> t;
	while(t--){
		int n;
		cin >>n; // 3
		int k = n*(n-1)/2; // 3
		vector<int> v(k), ans;
		for(int i=0; i<k; i++) cin >> v[i];
		sort(v.begin(), v.end());
		//cout << "v= ";
		//for(auto x:v) cout << x << " ";
		//cout << endl;
		int m=n-1; //2		
		int i=m-1; // 1
		while(i<k && m>0){
			ans.push_back(v[i]);
			//cout << "pushed = " << v[i] << ", ";
			m--;			
			i += m;
		}
		ans.push_back(v[k-1]);
		for(int x:ans) cout << x << " ";
		cout << endl;
	}	

	
}

/*
5
3
1 3 1
2
10
4
7 5 3 5 3 3
5
2 2 2 2 2 2 2 2 2 2
5
3 0 0 -2 0 -2 0 0 -2 -2
*/

/*
1 3 3
10 10
7 5 3 12
2 2 2 2 2
0 -2 0 3 5
*/