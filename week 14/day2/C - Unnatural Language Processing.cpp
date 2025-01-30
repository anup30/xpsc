// C - Unnatural Language Processing, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	auto isv = [](char c) -> bool{
		return (c=='a' || c=='e');
	};
	
	auto isc = [](char c) -> bool{
		return (c=='b' || c=='c' || c=='d');
	};
		
	int tc=1;
	cin >> tc;
	while (tc--){
		int n, i=0;
		cin >> n;
		string s;
		cin >> s;
		string res ="";
		bool c=true, v=false;
		while(i<n){
			if(c && isc(s[i])){
				res += s[i];
				c=false;
				v=true;
			}
			else if(v && isv(s[i])){
				res += s[i];
				v=false;
				c=true;
				// . position
				if(i+2<n && isc(s[i+2])){
					i++;
					res+= s[i];			
					res += ".";		
				}
				else if(i+2<n && isv(s[i+2])){
					res += ".";
				}
				else if(i+1<n){
					i++;
					res+= s[i];	
					res += ".";
				}
				else{
					res += ".";
				}
			}
			i++;
		}
		int k= res.size();
		if(res[k-1]=='.') res.pop_back();
		cout << res << endl;
	}
}

/*
6
8
bacedbab
4
baba
13
daddecabeddad
3
dac
6
dacdac
22
dababbabababbabbababba

ba.ced.bab
ba.ba
dad.de.ca.bed.dad
dac
dac.dac
da.bab.ba.ba.bab.bab.ba.bab.ba
*/