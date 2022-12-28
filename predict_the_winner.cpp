///[1,5,2] - false because for player 1 at max only 1+2 = 3 is possible but for player2, 5 is possible hence player1<player2(return false)
///[1,5,233,7]-true , because atfirst player1=max(1,7)=7, player2=min(1,233)=1, at second player1=max(5,233)=233; so, player1=234, player2=12 hence retuen true bcoz player1=>player2

#define ll long long
class Solution {
   int fun(int i,int j,vector<int>&nums,int choice)
   {
     if(i>j)return 0;
     if(choice==0)
     {
       return max(nums[i]+fun(i+1,j,nums,1), nums[j]+sun(i,j-1,nums,1))
     }
     else
     {
       return min(fun(i+1,j,nums,0),fun(i,j-1,nums,0));
     }
   }
    
public:
    bool PredictTheWinner(vector<int>& nums) {
        
        
     int n=nums.size();
     ll totalsum=0;
     for(int i=0;i<n;i++)
      {
        total+=nums[i];
      }
      ll player1=fun(0,n-1,nums,0);
      totalsum=totalsum-player1;
      return (player1>=totalsum);


    }
};
