class Solution {
    public:
    void backtracking(int ind,vector<vector<int>>&ans, vector<int>&ds,int n, int k)
    {
        //bc
        if(ds.size()==k)
        {
            ans.push_back(ds);
        
        }
        else
        {
        for(int i=ind;i<=n;i++)
        {
            
                ds.push_back(i);
                backtracking(i+1,ans,ds,n,k);
                ds.pop_back();

            
        }
        }
    }
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        vector<int>ds;
        /*if(k==0)
        {
            ans.push_back(ds);
            return ans;
        }*/
        backtracking(1,ans,ds,n,k);
        return ans;
    }
};
