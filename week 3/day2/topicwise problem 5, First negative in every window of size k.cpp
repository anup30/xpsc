// First negative in every window of size k, Accepted
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    vector<int> FirstNegativeInteger(vector<int>& arr, int k) {
        // write code here
        int sz = arr.size();
        vector<int> res;
        for(int i=0, j=k-1; j<=sz-1; i++,j++){
            bool found = false;
            for(int k=i; k<=j; k++){
                if(arr[k]<0){
                    found=true;
                    res.push_back(arr[k]);
                    break;
                }
            }
            if(!found) res.push_back(0);
        }
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution ob;
        vector<int> ans = ob.FirstNegativeInteger(arr, k);
        for (auto it : ans) {
            cout << it << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends