// week 2, Topicwise Problem 6, Accepted
// C. Dora and Search
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t=1;
   cin >> t;
   while(t--){
		int n;
		cin >> n;
		vector<int> v(n+1);
		v[0]=0;
		for(int i=1; i<=n; i++) cin >> v[i];
		int lo=1, hi=n, l=1, r=n;
		bool found=false, b1, b2;
		int loop=0;
		while(l<r){
			b1= false, b2=false;
			//cout <<"loop= " <<loop++ << " l,r = " << l <<", " << r << "  lo, hi = " << lo << ", " << hi << endl;			
			if(v[l] == lo || v[l]==hi){
				b1= true;
				if(v[l]==lo) lo++;
				if(v[l]==hi) hi--;
				l++;				
			}
			if(v[r] == lo || v[r]==hi){
				b2=true;
				if(v[r] == lo) lo++;
				if(v[r]==hi) hi--;
				r--;				
			}
			if(b1==false && b2==false){
				found=true;
				//cout << "found\n";
				break;
			}
		}
		if(found) cout << l << " " << r << endl;
		else cout << -1 << endl;
   }
   return 0;
}

/*
6
2 3 6 5 4 1
*/