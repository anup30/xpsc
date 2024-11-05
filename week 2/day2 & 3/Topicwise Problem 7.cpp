// week 2, Topicwise Problem 7, Accepted
// B. Berland Music
#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t = 1;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> pi(n);
		vector<int> qi(n);
		map<int,int> mp;
		for (int i = 0; i < n; i++) {
			cin >> pi[i];
			qi[i] = pi[i];
			mp[pi[i]] = i;
		}
		string s;
		cin >> s;
		vector<int> vp, vn;
		for (int i = 0; i < n; i++) {
			if (s[i] == '1') vp.push_back(pi[i]);
			else vn.push_back(pi[i]);
		}
		sort(vp.begin(), vp.end(), greater<int>());
		//cout << "vp = ";
		//for (auto x : vp) cout << x << " ";
		//cout << "\n";
		sort(vn.begin(), vn.end(), greater<int>());
		//cout << "vn = ";
		//for (auto x : vn) cout << x << " ";
		//cout << "\n";
		vector<int> vp2;
		vector<int> vn2;
		int n2 = n;
		for (int i = 0; i < vp.size(); i++) vp2.push_back(n2--);
		for (int i = 0; i < vn.size(); i++) vn2.push_back(n2--);		
		// ok
		/*for (int i = 0; i < pi.size(); i++){
			for (int j = 0; j < vp.size(); i++) {
				if (pi[i] == vp[j]) qi[i] = vp2[j];
			}
		}
		for (int i = 0; i < pi.size(); i++) {
			for (int j = 0; j < vn.size(); i++) {
				if (pi[i] == vn[j]) qi[i] = vn2[j];
			}
		}*/
		for(int i=0; i<vp.size(); i++) {
			qi[mp[vp[i]]] = vp2[i];
		}
		for(int i=0; i<vn.size(); i++){
			qi[mp[vn[i]]] = vn2[i];
		}
		for (auto x : qi) cout << x << " ";
		cout << "\n";
	}
	return 0;
}


/*
8
2 3 1 8 5 4 7 6
01110001

1 6 5 8 3 2 4 7
*/