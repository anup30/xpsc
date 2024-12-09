// B. Fun Game, Accepted
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
		cin >> n;
		string s, t;
		cin >> s >> t;
		if(s==t){
			cout << "YES" << endl;
			continue;
		}
		int i=0, s1=-1, t1=-1;
		while(i<n){
			if(s[i]=='1'){
				s1=i; 
				break;
			} 		
			i++;
		}		
		if(s1 == -1){
			cout << "NO" << endl;
			continue;
		}
		bool found = false;
		for(int i=0; i<s1; i++){
			if(s[i] != t[i]){
				cout << "NO" << endl;
				found=true;
				break;
			}
		}	
		if(!found) cout << "YES" << endl;
	}
}

/*
6
1
0
1
7
0110100
0110100
9
100101010
101111110
4
0011
1011
4
0100
0001
8
10110111
01100000

NO
YES
YES
NO
YES
YES
*/