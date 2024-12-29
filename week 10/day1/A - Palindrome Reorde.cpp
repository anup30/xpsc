// A - Palindrome Reorder, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	string s;
	list<char> res;
	cin>> s;
	map<char, int> mp;
	for(char c: s){
		mp[c]++;
	}
	int odd =0;
	auto it = mp.begin();
	auto ito = it;
	while(it!= mp.end()){
		if((it->second)%2==1){
			odd++;
			ito = it;
		}
		it++;		
	}
	if(odd>1) cout << "NO SOLUTION" << endl;
	else if(odd==1){
		int sz = ito->second;
		char c = ito->first;
		for(int i=0; i<sz; i++){
			res.push_back(c);
		}
		mp.erase(ito);
		auto it = mp.begin();
		while(it!= mp.end()){
			for(int i=0; i<(it->second)/2; i++) res.push_front(it->first);			
			for(int i=0; i<(it->second)/2; i++) res.push_back(it->first);			
			it++;		
		}
		for(char c:res) cout << c;
		cout << endl;
	}
	else{
		auto it = mp.begin();
		while(it!= mp.end()){
			for(int i=0; i<(it->second)/2; i++) res.push_front(it->first);			
			for(int i=0; i<(it->second)/2; i++) res.push_back(it->first);			
			it++;		
		}
		for(char c:res) cout << c;
		cout << endl;
	}
}
