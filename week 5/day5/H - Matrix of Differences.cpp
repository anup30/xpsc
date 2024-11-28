// H - Matrix of Differences, Accepted
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
		cin >> n;
		int inc =1, dec =n*n, cnt=1;
		vector<vector<int>> v(n, vector<int>(n)); 
		for(int i=0; i<n; i++){
			if(i%2==0){
				for(int j=0; j<n; j++){
					if(j%2==0){
						v[i][j] = inc++;
					}
					else{
						v[i][j] = dec--;
					}
				}
			}
			else{
				if(n%2==0){
					for(int j=n-1; j>=0; j--){
						if(j%2==1) v[i][j] = inc++;						
						else v[i][j] = dec--;						
					}
				}
				else{
					for(int j=n-1; j>=0; j--){
						if(j%2==0) v[i][j] = dec--;						
						else v[i][j] = inc++;						
					}
				}				
			}						
		}
		// print
		int r=n, c=n;
		for(int i=0; i<r; i++){
			for(int j=0; j<c; j++){
				cout<< v[i][j] << " ";
			}
			cout << endl;
		}	
	}
}

/*
2
2
3
*/