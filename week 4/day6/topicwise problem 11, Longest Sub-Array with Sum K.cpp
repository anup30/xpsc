// Longest Sub-Array with Sum K, Accepted
// https://www.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=longest-sub-array-with-sum-k

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int lenOfLongestSubarr(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        int mx = 0, cum=0;
        map<int,int> mp;
        for(int i=0; i<n; i++){
        	cum += arr[i];
        	if(cum==k){
        		mx = i+1;
			}
			else if(mp.find(cum-k) != mp.end()){
				mx = max(mx, i-mp[cum-k]);
			}
			if(mp.find(cum)==mp.end()){
				mp[cum]=i;
			}
		}
        return mx;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after t

    while (t--) {
        vector<int> arr;
        int k;
        string inputLine;

        getline(cin, inputLine); // Read the array input as a line
        stringstream ss(inputLine);
        int value;
        while (ss >> value) {
            arr.push_back(value);
        }

        cin >> k;
        cin.ignore(); // Ignore newline character after k input

        Solution solution;
        cout << solution.lenOfLongestSubarr(arr, k) << "\n";
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends

/*
3
10 5 2 7 1 9
15
-1 2 -3
-2
1 -1 5 -2 3
3

4
3
4
*/