// D - Alt-Tab, Accepted
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);	
	
	int n;
	cin >> n;
	vector<string> v(n);
	set<string> st;
	vector<string> res;
	for(int i=0; i<n; i++) cin >> v[i];
	for(int i=n-1; i>=0; i--){
	    auto it = st.find(v[i]);
	    if(it==st.end()){
	        st.insert(v[i]);
	        res.push_back(v[i]);
	    }
	}
	for(int i=0; i<res.size(); i++){
	    int len = res[i].size();
	    cout << res[i][len-2] << res[i][len-1];
	}
}
