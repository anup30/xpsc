// F - Remove Prefix, Accepted
#include<bits/stdc++.h>
using namespace std;

int main(){	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		int ar[n];		
		for(int i=0; i<n; i++) cin >> ar[i];
		set<int> st;
		int num=0;
		for(int i=n-1; i>=0; i--){
			auto it = st.find(ar[i]);
			if(it== st.end()) st.insert(ar[i]);
			else{
				num = i+1;			
				break;
			}
		}
		cout << num << endl;		
	}
		
}