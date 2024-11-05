// D - Spell Check, Accepted

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;
	string s ="Timur";  
	while(t--){
		set<char> s;
		s.insert('T');
		s.insert('i');
		s.insert('m');
		s.insert('u');
		s.insert('r');
		int n;
		string st;
		cin >> n>> st;
		if(n ==5){
			for(int i=0; i<5; i++){
				s.erase(st[i]);
			}
			if(s.size()==0) cout << "YES\n";
			else cout << "NO\n";	
		}
		else{
			cout << "NO\n";	
		}		
	}
   return 0;
}