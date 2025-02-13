// 39. Combination Sum, Accepted
// https://leetcode.com/problems/combination-sum/description/
// recursion backtracking
class Solution {
public:
    void func(int i, int target, vector<int>& candidates, vector<vector<int>> &ans, vector<int> &v){
        if(i==candidates.size()){
            if(target==0){
                ans.push_back(v);
            }
            return;
        }
        //pick
        if(candidates[i]<=target){
            v.push_back(candidates[i]);
            func(i, target-candidates[i], candidates, ans, v);
            v.pop_back();
        }
        //don't pick
        func(i+1, target, candidates, ans, v);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) { // <---
        vector<vector<int>> ans;
        vector<int> v;
        func(0, target, candidates, ans, v);
        return ans;
    }
};