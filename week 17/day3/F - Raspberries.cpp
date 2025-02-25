// F - Raspberries, Accepted
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
		vector<int> v(n);
		int e=0, o=0, mn=k;
		for(int i=0; i<n; i++){
			cin >> v[i];
			if(v[i]%2==0) e++;
			else o++;
		} 
		if(k==2){
			if(e>0)mn=0;			
			else mn=1;			
		}
		else if(k==4){
			int cur=0;
			if(e>1) mn=0;
			else if(e==1) mn=1;
			else mn=2;
			for(int i=0; i<n; i++){
				if(v[i]%4==0) mn=0;
				cur = 4-(v[i]%4);
				mn = min(mn, cur);				
			}			
		}
		else {
			int cur=0;
			for(int i=0; i<n; i++){
				if(v[i]%k==0) mn=0;
				cur = k-(v[i]%k);			
				mn = min(mn, cur);
			}			
		}	
		cout << mn << endl;
	}
}
