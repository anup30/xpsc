// I - Premutation, Accepted
#include<iostream>
#include<vector>
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
		int ar[n][n - 1];
		//vector<vector<int>> ar(n, vector<int>(n-1));
		map<int, int> mp;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n - 1; j++) {
				cin >> ar[i][j];
				if (j == 0) mp[ar[i][j]]++;
			}
		}
 		auto it = mp.begin();
		int firstval = it->first, count = it->second;
		while (it != mp.end()) {
			if (it->second > count) {
				firstval = it->first;
				count = it->second;
			}
			it++;
		}
		for (int i = 0; i < n; i++) {
			if (ar[i][0] != firstval) {
				cout << firstval << " ";
				for (int j = 0; j < n - 1; j++) {
					cout << ar[i][j] << " ";
				}
				cout << endl;
				break;
			}
		}
	}
}
