class Solution {
    void fun(int index,vector<vector<int>>&ans,vector<int>&ds,vector<int>&nums,int n)
    {
        if(index==n)
        {
            ans.push_back(ds);
            return;
        }
        ///pick
        ds.push_back(nums[index]);
        fun(index+1,ans,ds,nums,n);
        ds.pop_back();
        ///Notpick
        fun(index+1,ans,ds,nums,n);

    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>ans;
        vector<int>ds;
        fun(0,ans,ds,nums,n);
        return ans;
    }
};
