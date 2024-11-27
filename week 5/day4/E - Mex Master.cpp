// E - Mex Master, Accepted
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
		int zero=0, one= 0, bigger=0;		
		for(int i=0; i<n; i++){
			cin >> v[i];
			if(v[i]==0) zero++;
			else if(v[i]==1) one++;
			else if(v[i]>1) bigger = v[i];
		} 
		if(zero<=floor(0.5 + n/2.0)) cout << 0 << endl;
		else{
			if(!bigger && !one) cout << 1 << endl; // all 0
			else if(bigger) cout << 1 << endl;
			else cout << 2 << endl;			
		}
	}	
}
 
/*
int main(){	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);	
	
	int t=1;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> v(n);
		int zero=0, one= 0, bigger=0;		
		for(int i=0; i<n; i++){
			cin >> v[i];
			if(v[i]==0) zero++;
			else if(v[i]==1) one++;
			else if(v[i]>1) bigger = v[i];
		} 
		int ans;
		if(zero<=floor(0.5 + n/2.0)) ans= 0;
		else{
			if(!bigger && !one) ans=1; // all 0
			else if(!one) ans=1;
			else if(bigger && one) ans=1; // if 0,0,0,1 ?
			else ans=2;	// if bigger == 2 ? // 0,0,0,2,1  // 0,0,0,2,0 move 2 to last?
		}
		cout << ans << endl;
	}	
}
*/
/*
3
2
0 0
3
0 0 1
8
1 0 0 0 2 0 3 0


1
0
1
*/