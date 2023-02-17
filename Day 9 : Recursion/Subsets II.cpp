class Solution {
public:
    vector<vector<int>> ans;
    void dfs(vector<int> nums, vector<int> &sub, int ind)
    {
        ans.push_back(sub);
        if(ind == nums.size())
        {
            return;
        }
        for(int j = ind;j<nums.size();j++)
        {
            if(j > ind && nums[j] == nums[j-1])
            {
                continue;
            } 
            sub.push_back(nums[j]);
            dfs(nums,sub,j+1);
            sub.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(begin(nums), end(nums));
        vector<int> sub;
        dfs(nums,sub,0);
        return ans;
    }
};
