// C. Array Elimination, Accepted
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
		vector<int> bit(30,0); // set bit count, a<2^30
		for(int i=0; i<n; i++) cin >> v[i];		
		for(int i=0; i<30; i++){
			int num = (1<<i);
			for(int j=0; j<n; j++){
				if((v[j]&num)!=0) bit[i]++;
			}
		}
		for(int k=1; k<=n;k++){
			bool take=true;
			for(int i=0; i<30; i++){
				if((bit[i]%k)!=0){
					take =false;
					break;
				}
			}
			if(take) cout << k << " ";
		}
		cout << endl;
	}
}
