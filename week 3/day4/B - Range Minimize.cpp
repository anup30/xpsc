// B - Range Minimize, Accepted
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t=1;
    cin>>t;
    while(t--){
    	int n;
    	cin >> n;
    	vector<int> v(n);
    	for(int i=0; i<n; i++) cin >> v[i];
    	sort(v.begin(), v.end());
    	cout << min({v[n-2] - v[1], v[n-1]-v[2], v[n-3]-v[0]}) << endl;
	}
    return 0;
}
