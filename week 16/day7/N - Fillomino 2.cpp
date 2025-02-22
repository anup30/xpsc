// N - Fillomino 2
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);		
	
	int n;
	cin >> n;
	vector<int> dia(n);
	for (int i = 0; i < n; i++) cin >> dia[i];
	vector<vector<int>> ans(n, vector<int>(n, 0)); 
	for (int i = 0; i < n; i++){
		int num = dia[i];
		int row = i, col = i, count = dia[i];	
		while (count--){
			ans[row][col] = num;	
			if (col > 0 && ans[row][col - 1] == 0) col--;					
			else row++;					
		}
	} 
	for (int i = 0; i < n; i++){
		for (int j = 0; j <= i; j++){
			cout << ans[i][j] << " ";
		}
		cout << endl;
	}	
}
