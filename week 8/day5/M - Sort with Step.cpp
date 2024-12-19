// M - Sort with Step, Accepted
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
		cin >> n>> k;
		vector<int> v(n);
		for(int i=0; i<n; i++) cin >> v[i];
		int cnt=0;
		for(int i=0; i<n; i++){
			int tmp = abs(i-v[i]+1);
			if(tmp%k !=0) cnt++;			
		}
		if(cnt==0) cout << "0\n";
		else if(cnt==1 || cnt==2) cout << "1\n";
		else cout << "-1\n";
	}
}
