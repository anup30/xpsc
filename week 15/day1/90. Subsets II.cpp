class Solution {
public:
    void func(vector<vector<int>> &ans,vector<int> &nums, vector<int> &v, int idx, bool pre){
        if(idx==nums.size()) ans.push_back(v);
        else{
            //ignore
            func(ans, nums, v, idx+1,false);
            if(idx>0 && nums[idx]==nums[idx-1] && (!pre)) return;
            //take
            v.push_back(nums[idx]);
            func(ans, nums, v, idx+1,true);
            v.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums){
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        vector<int> v;
        func(ans, nums, v, 0, false);
        return ans;
    }
};
