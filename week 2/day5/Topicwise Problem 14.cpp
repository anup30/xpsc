// week 2, Topicwise Problem 14, Accepted
// D. Matryoshkas
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t = 1;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n;	
		multiset<int> ms;
		for(int i=0; i<n; i++){
			cin >> k;
			ms.insert(k);
		}		
		int count =0;
		while(!ms.empty()){
			auto it = ms.begin();
			count++;
			int i = *it;
			while(true){
				auto it2 = ms.find(i++);
				if(it2 != ms.end()) ms.erase(it2);
				else break;				
			}
		}
		cout << count << endl;
	}
	return 0;
}
