// J - Jumping on Tiles, Accepted
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
		int la = s.size()-1;
		int dif = abs(int(s[0]) - int(s[la]));
		map<char, vector<int>> mp;
		for(int i=0; i<=la; i++){
			mp[s[i]].push_back(i+1);
		}		
		auto it1 = mp.begin(), it2 = mp.begin();
		int m=0; ///
		vector<int> ans;
		if(s[0]<s[la]){
			it1 = mp.find(s[0]);
			it2 = mp.find(s[la]);
			auto it3 =it1;
			while(true){
				m+= it3->second.size();
				for(int x:it3->second) ans.push_back(x);
				it3++;
				if(it3==it2){
					m+= it3->second.size();
					for(int x:it3->second) ans.push_back(x);
					cout << dif << " " << m << endl;
					for(int x:ans) cout << x << " ";
					cout << endl;
					break;
				} 
			}			
		}
		else if(s[0]>s[la]){
			it1 = mp.find(s[0]);
			it2 = mp.find(s[la]);			
			auto it3 =it1;
			while(true){
				m+= it3->second.size();
				for(int x:it3->second) ans.push_back(x);
				it3--;
				if(it3==it2){
					m+= it3->second.size();
					for(int x:it3->second) ans.push_back(x);
					cout << dif << " " << m << endl;
					for(int x:ans) cout << x << " ";
					cout << endl;
					break;
				} 
			}
		}
		else if(s[0] == s[la]){
			it1 = mp.find(s[0]);
			it2 = mp.find(s[0]);
			m = it1->second.size();
			int jm =0;
			cout << dif << " " << m << endl;		
			for(int x:it1->second) cout << x << " ";
			cout << endl;
		}		
	}	
}

/*
6
logic
codeforces
bca
aaaaaaaaaaa
adbaadabad
to
*/

/*
9 4
1 4 3 5
16 10
1 8 3 4 9 5 2 6 7 10
1 2
1 3
0 11
1 8 10 4 3 5 7 2 9 6 11
3 10
1 9 5 4 7 3 8 6 2 10
5 2
1 2
*/