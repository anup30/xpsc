// C - Make My Array Equal, Accepted
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);	
	
	int t;
	cin >> t;
	while(t--){
		int n, a;
		cin >> n;
		set<int> st;
		for(int i=0; i<n; i++){
			cin >> a;
			st.insert(a);
		}
		if(st.size()==1){
			cout << "YES\n";
		}
		else if(st.size()==2){
			auto it = st.begin();
			int a,b;
			a= *it;
			it++;
			b=*it;
			if(a==0 || b==0){
				cout << "YES\n";
			}
			else{
				cout << "NO\n";
			}
		}
		else if(st.size() >2){
			cout << "NO\n";	
		}		
	}
	
}