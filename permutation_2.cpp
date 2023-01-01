#include<bits/stdc++.h>
using namespace std;

void fun(int index,vector<int>&nums,vector<vector<int>>&ans)
{
    if(index==nums.size())
    {

        /*condition start for duplicacy----------*/
        for(int i=0;i<ans.size();i++)
        {
            if(ans[i]==nums)return;
        }

        /*condition end----------------*/
        ans.push_back(nums);
        return;
    }
    for(int i=index;i<nums.size();i++)
    {
        swap(nums[index],nums[i]);
        fun(index+1,nums,ans);
        ///backtrack
        swap(nums[index],nums[i]);
    }
}


vector<vector<int>>permute(vector<int>&nums)
{
    vector<vector<int>>ans;
    fun(0,nums,ans);
    return ans;
}


int main()
{
    vector<int>arr={1,1,2};
    vector < vector < int >> sum = permute(arr);
  cout << "All Permutations are " << endl;
  for (int i = 0; i < sum.size(); i++) {
    for (int j = 0; j < sum[i].size(); j++)
      cout << sum[i][j] << " ";
    cout << endl;
}
}
