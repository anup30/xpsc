// Count Occurences of Anagrams, Accepted
//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	    map<char, int> mp, mt;
	    int len = pat.size();
	    for(int i=0; i<len; i++) mp[pat[i]]++;
	    int sz = txt.size();
	    for(int i=0; i<=len-1; i++) mt[txt[i]]++;
	    int count =0;
	    if(mp==mt) count++;    
	    for(int i=1, j=len; j<=sz-1; i++, j++){
	    	mt[txt[i-1]]--;
	    	if(mt[txt[i-1]]==0) mt.erase(txt[i-1]);
	    	mt[txt[j]]++;
	    	if(mp==mt) count++;
		}
		return count;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends