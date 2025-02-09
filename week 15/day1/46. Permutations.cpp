// problem : 46. Permutations, Accepted
// https://leetcode.com/problems/permutations/description/

class Solution {
public:
    void func(vector<vector<int>> &ans, vector<int> &nums,vector<int> &v, vector<bool> &b){
        if(v.size()==nums.size()){
            ans.push_back(v);            
        }
        else{
            for(int i=0; i<nums.size(); i++){
                if(b[i]){
                    v.push_back(nums[i]);
                    b[i]=false;
                    func(ans, nums, v, b);
                    b[i]=true;
                    v.pop_back();
                }
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int sz = nums.size();
        vector<bool> b(sz, true);
        vector<int> v;
        vector<vector<int>> ans;
        func(ans, nums, v, b);
        return ans;
    }
};