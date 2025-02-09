// 131. Palindrome Partitioning, Accepted
// https://leetcode.com/problems/palindrome-partitioning/description/

class Solution {
public:
    bool isPlaindrome(string &s, int l, int r){
        while(l<=r){
            if(s[l++] != s[r--]) return false;
        }
        return true;
    }
    void func(vector<vector<string>> &ans, vector<string> &a, string &s, int idx){
        if(idx==s.size()) ans.push_back(a);
        else{
            for(int i=idx; i<s.size(); i++){
                if(isPlaindrome(s, idx, i)){
                    a.push_back(s.substr(idx, i-idx+1));
                    func(ans, a, s, i+1);
                    a.pop_back();
                }
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> a;
        func(ans,a,s, 0);
        return ans;
    }
};
