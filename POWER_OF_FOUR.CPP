class Solution {
public:
    bool isPowerOfFour(int n) {
         int i=0;
        if(n==1)return true;
        
        if(n<=0 || n%4!=0)
        return false;

        return isPowerOfFour(n/4);
    }
};
