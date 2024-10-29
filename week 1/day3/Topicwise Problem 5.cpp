// Topicwise Problem 5, accepted
// C. Word Game

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t = 1;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		vector<string> v1, v2, v3;
		map<string, int> mp;
		int i1=0, i2=0, i3=0;
		string s;
		for(int i=0; i<n; i++){
			cin >> s;
			mp[s]++;
			v1.push_back(s);
		}
		for(int i=0; i<n; i++){
			cin >> s;
			mp[s]++;
			v2.push_back(s);
		}
		for(int i=0; i<n; i++){
			cin >> s;
			mp[s]++;
			v3.push_back(s);
		}		
		for(string s:v1){	
			if(mp[s]==1) i1+=3;
			else if(mp[s]==2) i1+=1;
		}
		for(string s:v2){		
			if(mp[s]==1) i2+=3;
			else if(mp[s]==2) i2+=1;
		}
		for(string s:v3){		
			if(mp[s]==1) i3+=3;
			else if(mp[s]==2) i3+=1;
		}
		cout << i1 << " " << i2 << " " << i3 << '\n';
	}
}
