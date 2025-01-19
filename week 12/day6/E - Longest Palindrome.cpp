// random, E - Longest Palindrome, Accepted
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m;
	cin >> n >> m;
	string s;
	set<string> st;
	for (int i = 0; i < n; i++) {
		cin >> s;
		st.insert(s);
	}
	string res = "", mid = "";
	bool single = false;
	while (!st.empty()) {
		string tmp = *st.begin();
		st.erase(st.begin()); //
		string tmp2 = tmp;
		reverse(tmp2.begin(), tmp2.end());
		if (st.find(tmp2) != st.end()) {
			res += tmp;
			st.erase(tmp2); //
		}
		else {
			if (!single) {
				bool plain = true;
				for (int i = 0; i <= m / 2; i++) {
					if (tmp[i] != tmp[m - 1 - i]) {
						plain = false;
						break;
					}
				}
				if (plain) mid = tmp;
			}		
		}
	}
	int len = 2 * res.size() + mid.size();
	cout << len << endl;
	cout << res << mid;
	reverse(res.begin(), res.end());
	cout << res << endl;
}

/*
3 3
tab
one
bat

6
tabbat
*/

/*
9 4
abab
baba
abcd
bcde
cdef
defg
wxyz
zyxw
ijji

20
ababwxyzijjizyxwbaba
*/
