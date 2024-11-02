// F - Not Found, Accepted

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	string s;
	cin >> s;
	vector<bool> v(123, false);
	int len = s.size();
	for(int i=0; i<len; i++){
		int c= s[i]; //97-122
		v[c] = true;
	}
	bool found = false;
	for(int i=97; i<=122; i++){
		if(v[i]==false){
			found=true;
			char c = i;
			cout << c << endl;
			break;
		}
	}
	if(!found){
		cout << "None\n";
	}
}
