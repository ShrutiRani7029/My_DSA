class Solution {
public:
int count=0;
void fun(vector<int>&nums,int target,int index,int sum)
{
    ///bc
    if(index==nums.size())
    {
        if(sum==target)count++;

    }
    //+
    else{
    fun(nums,target,index+1,sum+nums[index]);
    //-
    fun(nums,target,index+1,sum-nums[index]);
    }
}
    int findTargetSumWays(vector<int>& nums, int target) {
       /* int sum=0;
        
        for(int i=0;i<nums.size();i++)
        sum+=nums[i];///9
        int m=sum-target;
        for(int i=0;i<nums.size();i++)
        {

        }   
        */
        //sort(nums.begin(),nums.end());
        fun(nums,target,0,0);   
        return count; 
    }
    
 };
