class Solution {
public:
    vector<vector<int>> ans;
    void dfs(vector<int>& candidates, int target, vector<int> &tar, int i)
    {
        if(target == 0)
        {
            ans.push_back(tar);
            return;
        }
        for(int j = i;j<candidates.size();j++)
        {
            if(j>i && candidates[j]==candidates[j-1]) continue;
            if(candidates[j]>target) break;
            tar.push_back(candidates[j]);
            dfs(candidates,target-candidates[j],tar,j+1);
            tar.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int> tar;
        dfs(candidates,target,tar,0);
        return ans;
    }
};
