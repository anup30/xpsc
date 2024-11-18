// G - Decode String, Accepted
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t=1;
	cin >> t;
	while(t--){
		int n;
		cin >>  n;
		string s, rev="";
		cin >> s;
		int i = n-1;
		while(i>=0){
			if(s[i]== '0'){
				i--;
				int b = s[i]-48;
				//cout << "b= " << b <<" ";
				i--;
				int a = s[i]-48;	
				//cout << "a= " << a <<" ";			
				int ab = 10*a + b;			
				//cout << "ab= " << ab <<" ";	 
				char c = char(ab+96); // 1+96= 97= 'a'
				//cout << "c= " << c <<"\n";	
				rev += c; // 48 == 'a' - '1'
				i--;
			}
			else{
				rev += char(s[i] + 48); // s[i] + 'a' - '1'
				i--;
			}
		}		
		reverse(rev.begin(), rev.end());
		cout << rev << endl;
		//cout << string(rev.rbegin(), rev.rend()) << endl; // ok
	}
}

/*
9
6
315045
4
1100
7
1213121
6
120120
18
315045615018035190
7
1111110
7
1111100
5
11111
4
2606
*/

/*
code
aj
abacaba
ll
codeforces
aaaak
aaaaj
aaaaa
zf
*/