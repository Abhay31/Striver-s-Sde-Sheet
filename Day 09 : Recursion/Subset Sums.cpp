class Solution
{
public:
    void solve(vector<int>arr, int sum, int ind, vector<int>&ans)
    {
        if(ind == arr.size())
        {
            ans.push_back(sum);
            return;
        }
        solve(arr,sum+arr[ind],ind+1,ans);
        solve(arr,sum,ind+1,ans);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int>ans;
        solve(arr,0,0,ans);
        return ans;
    }
};
