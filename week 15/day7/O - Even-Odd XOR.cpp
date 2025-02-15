// O - Even-Odd XOR, Accepted
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
	    cin>>n;	    
	    if(n==3){
	        cout<<2<<" "<<1<<" "<<3<<endl;
	        continue;
	    }
	    int evs=n/2;	    
	    int ods=n-evs;	    
	    vector<int>ev(evs);
	    vector<int>od(ods);
	    int num=0;
	    for(int i=0;i<evs-1;i++){
	        ev[i]=num;
	        num++;
	    }
	    for(int i=0;i<ods-1;i++){
	        od[i]=num;
	        num++;
	    }
	    int xore=0;
	    for(int i=0;i<evs-1;i++){
	        xore=xore^ev[i];
	    }
	    int xoro=0;
	    for(int i=0;i<ods-1;i++){
	        xoro=xoro^od[i];
	    }
	    if(xore==xoro){
	        xore^=ev[evs-2];
	        ev[evs-2]=num+1;
	        xore^=ev[evs-2];
	    }
	    ev[evs-1]=1e8;
	    xore^=ev[evs-1];
	    
	    od[ods-1]=xoro^xore;
	    int i=0;
	    int j=0;
	    while(i<ods && j<evs){
	        cout<<od[i]<<" "<<ev[j]<<" ";
	        i++;j++;
	    }
	    if(i<ods){
	        cout<<od[i];
	    }
	    cout<<endl;		
	}
}