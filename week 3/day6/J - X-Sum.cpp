// X-Sum, Accepted
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int ar[200][200];	
	int t=1;
	cin >> t;
	while(t--){
		int total =0, cur =0;
		int n, m;
		cin >> n >> m;
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				cin >> ar[i][j];
			}
		}
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				cur += ar[i][j];				
				int p,q;				
				p=i+1;
				q=j+1;
				while(p<n && q<m) cur += ar[p++][q++];								
				p=i+1;
				q=j-1;
				while(p<n && q>=0) cur += ar[p++][q--];								
				p=i-1;
				q=j-1;
				while(p>=0 && q>=0) cur += ar[p--][q--];								
				p=i-1;
				q=j+1;
				while(p>=0 && q<m) cur += ar[p--][q++];								
				if(total<cur) total = cur;
				cur=0;
			}
		}
		cout << total << endl;
	}	
}
