// Topicwise Problem 2, Accepted
// A. Make it White
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		char ar[n];
		int l=-1, r=-1;
		for(int i=0; i<n; i++){
			cin >> ar[i];
			if(ar[i]=='B'){
				if(l==-1){
					l=i;
					r=i;
				}
				else{
					r=i;
				}
			}
		}
		cout << r-l+1 << '\n';		
	}
	
}