// K - Prefix Sum Addicts, Accepted
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);	
	
	int t=1;
	cin >> t;
	while(t--){
        int n,k;            
		cin>>n>>k;
        vector<ll> s(n+1,0);
        for(int i=n-k+1;i<=n;i++){
            cin>>s[i];
        }
        vector<ll> a(n+1); 
        if(n==1 or k==1){
            cout<<"YES"<<endl;
            continue;
        } 
        for(int i=n;i>=n-k+2;i--){
            a[i]=(s[i]-s[i-1]);
        } 
        bool possible=true; 
        for(int i=n-k+2;i<=n-1;i++){
            if(a[i+1]<a[i]){
                possible=false;
                break;
            }
        } 
        if(!possible){
            cout<<"NO\n";
            continue;
        } 
        for(int i=n-k+1;i>1;i--){
            a[i]=a[i+1];
            s[i-1]=s[i]-a[i];
        }
        a[1]=s[1]; 
        for(int i=1;i<=n-1;i++){
            if(a[i+1]<a[i]){
                possible=false;
                break;
            }
        } 
        if(possible) cout<<"YES\n";        
        else cout<<"NO\n";        
    }
}

/*
4
5 5
1 2 3 4 5
7 4
-6 -5 -3 0
3 3
2 3 4
3 2
3 4


Yes
Yes
No
No
*/
