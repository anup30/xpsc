// K - Klever Permutation, Accepted
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
		cin >> n >> k;
		vector<int> v(n,0);
		int x=1;
		for(int i=0; i<k; i++){
			if(i%2==0){
				int j=i;
				while(j<n){
					v[j] = x++;
					j+= k;
				}
			}
			else{
				int j=i;
				while(j+k<n) j+= k;
				while(j>=i){
					v[j]= x++;
					j-=k;
				}
			}
		}
		for(int i: v) cout << i << " ";
		cout << endl;
	}
}
