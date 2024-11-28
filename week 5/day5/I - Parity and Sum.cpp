// I - Parity and Sum, Accepted
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
		ll omax=-1;
		cin >> n;
		vector<int> v(n), even;
		for(int i=0; i<n; i++){
			cin >> v[i];
			if(v[i]%2==0) even.push_back(v[i]);
			else if(v[i]>omax) omax = max(omax, (ll)v[i]);
		} 
		sort(even.begin(), even.end());
		int esize = even.size();
		if(omax==-1 || esize==0){
			cout << 0 << endl;
			continue;
		}	
		int count = esize;
		for(int i=0; i<esize; i++){
			if(even[i]<omax) omax += even[i];
			else{
				count++;
				omax += even.back();
			}			
			
		}
		cout << count << endl;
	}	
}