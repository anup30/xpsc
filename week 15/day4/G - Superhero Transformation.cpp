// G - Superhero Transformation, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	string s, t;
	cin >> s >> t;
	int sl=s.size(), tl = t.size();
	auto is_vowel=[](char c){
		if(c=='a' || c=='e' || c== 'i' || c=='o' || c=='u') return true;
		else return false;
	};
	if(sl != tl){
		cout << "No" << endl;
		return 0;
	}
	bool b= true;
	for(int i=0; i<sl; i++){		
		if(is_vowel(s[i]) != is_vowel(t[i])){
			b=false;
			break;
		}
	}
	if(b) cout << "Yes" << endl;
	else cout << "No" << endl;
}
