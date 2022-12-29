class Solution {
    public:
    void fun(int index,vector<vector<int>>&ans,vector<int>&ds,vector<int>&cs,int target)
    {
        if(target==0)
        {
            ans.push_back(ds);
            return;
        }

        for(int i=index;i<cs.size();i++)
        {
            ///for no duplicacy
            if(i>index && cs[i]==cs[i-1])continue;
            if(cs[i]>target)break;
            ds.push_back(cs[i]);
            fun(i+1,ans,ds,cs,target-cs[i]);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        vector<int>ds;
        fun(0,ans,ds,candidates,target);
        return ans;
    }
};
