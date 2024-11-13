// C. Ski Resort, Accepted
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t=1;
    cin>>t;
    while(t--){
        int n, k, q;
        cin >> n >> k >> q;
        vector<int> v(n);
        for(int i=0; i<n; i++) cin >> v[i];
        ll i=0, total=0;
        while(i<n){
        	ll cur =0, p, psum; // long long psum
        	if(v[i] <= q){   		
        		while(i<n && v[i] <= q){
        			cur++;
        			i++;
				}
				if(cur>=k){
					p = cur-k+1;
					psum = p*(p+1)/2; // sum of 1 to p
					total += psum;
				}
			}
			i++;
		}
		cout << total << endl;
    }
    return 0;
}
