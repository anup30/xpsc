// E - Cypher, Accepted
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
		vector<int> v(n);
		for(int i=0; i<n; i++){
			cin >> v[i];
		}
		int len;
		string s;		
		for(int i=0; i<n; i++){
			cin >> len >> s;
			for(int j=0; j<len; j++){
				if(s[j]=='D'){
					if(v[i]==9) v[i]=0;
					else v[i] +=1;
				}
				else{
					if(v[i]==0) v[i]=9;
					else v[i] -=1;
				}
			}
		}
		for(int i=0; i<n; i++){
			cout << v[i] << " ";
		}
		cout << "\n";
	}
}