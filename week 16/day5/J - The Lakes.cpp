// J - The Lakes, Accepted
// dfs, dsu
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int row[4]= {0,0,-1,1};
int col[4]= {-1,1,0,0};

void dfs(vector<vector<int>> &v,vector<vector<bool>> &vis, int i, int j, int r, int c, int &cnt){
	vis[i][j]=true;
	cnt += v[i][j];	
	for(int k=0; k<4; k++){
		int r1= i+row[k];
		int c1= j+col[k];
		if(r1>=0 && c1>=0 && r1<r && c1<c && !vis[r1][c1] && v[r1][c1]!=0){
			dfs(v, vis, r1, c1, r, c, cnt);
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
		
	int tc=1;
	cin >> tc;
	while (tc--){
		int r,c;
		cin >> r >> c;
		vector<vector<int>> v(r, vector<int>(c));
		vector<vector<bool>> vis(r, vector<bool>(c, false));
		for(int i=0; i<r; i++){
			for(int j=0; j<c; j++){
				cin >> v[i][j];
			}
		}
		int mx=0;
		for(int i=0; i<r; i++){
			for(int j=0; j<c; j++){
				if(v[i][j]!=0 && !vis[i][j]){
					int cnt=0;
					dfs(v, vis, i, j, r, c, cnt);
					mx=max(mx, cnt);
				}
			}
		}
		cout << mx << endl;
	}
}
