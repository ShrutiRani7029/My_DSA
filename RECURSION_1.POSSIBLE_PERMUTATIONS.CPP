#include<bits/stdc++.h>
using namespace std;

void fun(vector<vector<int>>&ans,vector<int>&ds,int freq[],vector<int>&nums,int n)
{
    ///base condition
    if(ds.size()==nums.size())
    {
        ans.push_back(ds);
        return;
    }
    ///loop (0-(n-1))
    for(int i=0;i<n;i++)
    {
        ///check marked or unmarked
        if(!freq[i])
        {
            ds.push_back(nums[i]);
            freq[i]=1;///marked
            fun(ans,ds,freq,nums,n);
            freq[i]=0;///unmarked
            ds.pop_back();
        }

    }
}

vector<vector<int>>permute(vector<int>&nums)
{

    vector<vector<int>>ans;
    vector<int>ds;
    int n=nums.size();
    int freq[n]={0};///initialise with 0
    for(int i=0;i<n;i++)
    {
        freq[i]=0;
    }
    fun(ans,ds,freq,nums,n);
    return ans;
}
int main()
{
    vector<int>arr={1,2,3};
    vector < vector < int >> sum = permute(arr);
  cout << "All Permutations are " << endl;
  for (int i = 0; i < sum.size(); i++) {
    for (int j = 0; j < sum[i].size(); j++)
      cout << sum[i][j] << " ";
    cout << endl;
}
}
