// 40. Combination Sum II, Accepted
// https://leetcode.com/problems/combination-sum-ii/description/
// recursion backtracking

class Solution {
public:
    void func(int i, int target, vector<int>& candidates, vector<vector<int>> &ans, vector<int> &v, bool b){
        if(i==candidates.size()){
            if(target==0){
                ans.push_back(v);
            }
            return;
        }
        //pick
        if(candidates[i]<=target){
            if(i==0 || b){
                v.push_back(candidates[i]);
                func(i+1, target-candidates[i], candidates, ans, v, true);
                v.pop_back();
            }
            else{
                if(!b && candidates[i] != candidates[i-1]){
                    v.push_back(candidates[i]);
                    func(i+1, target-candidates[i], candidates, ans, v, true);
                    v.pop_back();
                }
            }
        }
        //don't pick
        func(i+1, target, candidates, ans, v, false);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> v;
        func(0, target, candidates, ans, v, false);
        return ans;
    }
};