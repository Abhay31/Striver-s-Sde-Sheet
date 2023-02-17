class Solution {
public:
    vector<vector<string>> ans;
    bool ispal(string s,int start,int end)
    {
        while(start<=end)
        {
            if(s[start++] != s[end--])
            {
                return false;
            }
        }
        return true;
    }
    void pal(string s, vector<string>& str, int ind)
    {
        if(ind == s.length())
        {
            ans.push_back(str);
            return;
        }
        for(int i = ind;i<s.length();i++)
        {
            if(ispal(s,ind,i))
            {
                str.push_back(s.substr(ind,i-ind+1));
                pal(s,str,i+1);
                str.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string> str;
        pal(s,str,0);
        return ans;
    }
};
