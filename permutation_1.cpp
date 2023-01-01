class Solution {
    private:
    void fun(int freq[],vector<int>&ds,vector<vector<int>>&ans,vector<int>&nums,int n)
    {
        ///base condition-----------
        if(ds.size()==n){
            ans.push_back(ds);
            return;
        }
        for(int i=0;i<n;i++)
        {
            if(!freq[i])///unmarked
            {
               ds.push_back(nums[i]);
               freq[i]=1;///marked
               fun(freq,ds,ans,nums,n);
               freq[i]=0;///unmarked
               ds.pop_back();

            }
        }
    }
     
public:
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
      vector<vector<int>>ans;
      vector<int>ds;
      int freq[n];
      for(int i=0;i<n;i++)
      {
          freq[i]=0;
      }
      fun(freq,ds,ans,nums,n);
      return ans;
    }
};
