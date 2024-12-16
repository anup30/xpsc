// F - Keep it Beautiful, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		int n;
		cin >> n;
		vector<int> v(n);
		for(int i=0; i<n; i++) cin >> v[i];
		string s= "";
		int cnt=0,mn=v[0],mx=v[0];	
		int mc=0; // max changed
		for(int i=0; i<n; i++){
			if(v[i]>=mx){
				if(mc==0){
					s+= "1";				
					if(v[i]>mx) mx =v[i];					
				}
				else if(mc==1){
					if(v[i]<=mn){
						s+="1";
						if(v[i]>mx) mx =v[i];
					}
					else s+="0";					
				}
				else s+="0";								
			}
			else if(v[i]<=mn){				
				if(mc==0){								
					s+="1";	
					mc++;
					mx = v[i];				
				}
				else s+="0";									
			}
			else s+="0";						
		}
		cout << s << endl;
	}
}

/*
3
9
3 7 7 9 2 4 6 3 4
5
1 1 1 1 1
5
3 2 1 2 3

111110010
11111
11011
*/