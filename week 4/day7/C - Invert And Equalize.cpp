// C - Invert And Equalize, Accepted
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t=1;
    cin>>t;
    while(t--){
    	int n, one=0, zero=0;
        string s;
        cin >> n >> s;       
		int i=0;
        while(i<n){  // count 1s segment
        	if(s[i]=='1'){
        		while(i<n && s[i]=='1') i++;
        		one++; // one's segment        		
			}
			else i++;
		}
		//cout << "1 segments = " << one << endl;
		i=0;
		while(i<n){  // count 0s segment
			if(s[i]=='0'){
				while(i<n && s[i]=='0') i++;
				zero++;
			}
			else i++;
		}
		cout << min(one, zero) << endl;
    }
    return 0;
}

//12 111101101101