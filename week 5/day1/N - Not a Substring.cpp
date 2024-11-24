// N - Not a Substring, Accepted
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);	
	
	int t=1;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		if(s=="()"){
			cout << "NO\n";
			continue;
		}
		bool found =false;
		int i=0, len=s.size();
		while(i<=len-2){
			if(s[i]==s[i+1]){
				found = true;
				break;
			}
			i++;
		}
		if(found){	
			cout << "YES\n";		
			for(int j=0; j<len; j++) cout << "()";
			cout << endl;			
		}
		else{
			cout << "YES\n";
			for(int j=0; j<len; j++) cout << "(";
			for(int j=0; j<len; j++) cout << ")";
			cout << endl;
		}
	}	
}

/*
4
)(
(()
()
))()



YES
(())
YES
()()()
NO
YES
()(()())
*/