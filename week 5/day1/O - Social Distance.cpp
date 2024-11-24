// O - Social Distance, Accepted
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);	
	
	int t=1;
	cin >> t;
	while(t--){
		int n, k, count=0, c2;
		cin >> n >> k;
		string s;
		cin >> s;
		vector<int>v;
		for(int i=0; i<n; i++) if(s[i]=='1') v.push_back(i);		
		int sz = v.size();
		if(sz==0){
			count = 1+(n-1)/(k+1);
		}
		else{
			int space = v[0];
			count = 1+ (space-1)/(k+1);
			//cout << "count= " << count << endl;
			int li = (count-1)*(k+1);
			if(v[0]-li-1 < k) count--;
			//cout << "count= " << count << endl;
			int i=0, j=1;
			//cout << "at 0\n";
			while(j<sz){				
				space = v[j]-v[i] -1; ////  v[j]-v[i]
				c2 = space/(k+1);
				//cout << "count= " << count << endl;
				li = v[i] + c2*(k+1);
				if(v[j]-li-1 < k) c2--;
				count += c2;
				//cout << "at 1\n";
				i++;
				j++;
			}
			space = (n-1)-v[sz-1];
			count += space/(k+1); // space-1
			//cout << "count= " << count << endl;
			//cout << "at 2\n";
		}
		cout << count << endl;		
	}	
}

/*
6 1
010001
*/

