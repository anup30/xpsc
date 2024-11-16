// G - Compare T-Shirt Sizes, Accepted
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);	
	
	int t;
	cin >> t;
	while(t--){
		string r, s;
		cin >> r >> s;
		int rl = r.size()-1, sl = s.size()-1;
		if(r==s){
			cout << "=" << endl;
		}
		else if(r[rl]=='S'){ //
			if(s[sl]=='L' || s[sl]=='M'){
				cout << "<" << endl;
			}
			else if(s[sl]=='S'){
				if(rl>sl){
					cout << "<" << endl;
				}
				else{
					cout << ">" << endl;
				}
			}
		}
		else if(r[rl]=='M'){ //
			if(s[sl]=='L'){
				cout << "<" << endl;
			}
			else if(s[sl]=='S'){
				cout << ">" << endl;
			}
		}
		else if(r[rl]=='L'){ //
			if(s[sl]=='M' || s[sl]=='S'){
				cout << ">" << endl;
			}
			else if(s[sl]=='L'){
				if(rl>sl){
					cout << ">" << endl;
				}
				else{
					cout << "<" << endl;
				}
			}
		}
	}
	
}

/*
6
XXXS XS
XXXL XL
XL M
XXL XXL
XXXXXS M
L M
*/


/*
<
>
>
=
<
>
*/