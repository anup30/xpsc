// D - Preparing for the Contest, Accepted 
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);	
	
	int t=1;
	cin >> t;
	while(t--){
		int n, k, nn, kk;
		cin >> n >> k;
		nn=n;
		kk=k;
		vector<int> v(n);
		
		v[0]=1;
		int i=0, last=1;
		while(kk--){
			v[++i] = ++last;
		}
		for(int j=last; j<n; j++){
			v[j] = nn--;
		}
		if(k==n-1){
			for(int k=0; k<n; k++) cout << v[k] << " ";			
		}
		else{
			for(int k=last; k<n; k++) cout << v[k] << " ";
			for(int k=0; k<last; k++) cout << v[k] << " ";
		}	
		cout << endl;			
	}	
}

/*
3
6 2
5 4
5 0


3 5 4 1 6 2
1 2 3 4 5
5 4 3 2 1
*/