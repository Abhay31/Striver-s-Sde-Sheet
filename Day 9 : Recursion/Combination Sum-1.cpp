class Solution {
public:
    vector<vector<int>> ans;
    void dfs(vector<int>& candidates, int target, vector<int> &tar, int i)
    {
        if(target == 0)
        {
            ans.push_back(tar);
        }
        if(i == candidates.size())
        {
            return;
        }
        while(i < candidates.size() && target-candidates[i] >= 0)
        {
            tar.push_back(candidates[i]);
            dfs(candidates,target-candidates[i],tar,i);
            i++;
            tar.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int> tar;
        dfs(candidates,target,tar,0);
        return ans;
    }
};
