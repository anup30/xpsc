// C - Line Trip, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		int n, k, tmp;
		cin >> n >> k;
		vector<int> v;
		v.push_back(0);
		for(int i=0; i<n; i++){
			cin >> tmp;
			v.push_back(tmp);
		}
		int mx= 0;
		bool used =false;
		for(int i=0; i<n;i++){
			if(v[i+1]<k){
				mx = max(mx, v[i+1]-v[i]);
			}
			else{
				used =true;
				mx = max(mx, 2*(k-v[i]));
				break;
			}			
		}
		if(!used){
			mx= max(mx, 2*(k-v[n]));
		}
		cout << mx << endl;		
	}
}
