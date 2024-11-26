// B. Mainak and Interesting Sequence, Accepted
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);	
	
	int t=1;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		vector<int> v(n,1);
		if(n>m){
			cout << "NO\n";
			continue;
		} 
		else if(n%2==0 && m%2==1){
			cout << "NO\n";
			continue;
		} 
		else if(n%2==0){
			v[n-1] = (m+2-n)/2; // (m - (n-3 +1))/2
			v[n-2] = (m+2-n)/2;
		}
		else if(n%2==1){
			v[n-1] = m-(n-1);
		}
		cout << "YES\n";
		for(int i=0; i<n; i++) cout << v[i] << " ";
		cout << endl;
	}	
}