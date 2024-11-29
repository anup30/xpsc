// J - Turtle and Good Pairs, Accepted
#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool cmp(pair<char, int> p1, pair<char, int> p2){
	return p1.second > p2.second; // descending
}

int main(){	
	ios::sync_with_stdio(false);
	cin.tie(nullptr);	
	
	int t=1;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		string s;
		cin >> s;
		map<char, int> mp;
		for(char c:s) mp[c]++;
		list<pair<char, int>> li; //
		auto im = mp.begin();
		while(im !=mp.end()){
			li.push_back({im->first, im->second});
			im++;
		}		
		li.sort(cmp); 
		string ans = "";
		auto il = li.begin();
		bool erased;
		while(!li.empty()){
			erased = false;
			if(il->second>0){
				ans += il->first;
				il->second -= 1;
			}
			if(il->second==0){				
				il = li.erase(il);
				erased = true;
			}
			if(!erased) il++;
			if(il == li.end()) il = li.begin();
		}
		cout << ans << endl;	
	}	
}

/*
"ee" -> no plesant k
"ed" -> no plesant k
"ede" -> k=1,2 plesant
"eeeddd" -> no plesant k
"eeddm" -> k=2,4 plesant
"edm" -> k=1,2 plesant
"eed" -> k=2 plesant, k=1 unplesant

*/
