class Solution {
public:
   
    void fun(int index,string digits,vector<string>&res,string s[],string st)
    {
        if(index==digits.length())
        {
            res.push_back(st);
            return;
        }
        string hello=s[digits[index]-'0'];//s[0],s[1]---
        for(int j=0;j<hello.size();j++)
        {
            fun(index+1,digits,res,s,st+hello[j]);///ad,ae,af ; bd,be,bf ; cd,ce,cf
    //a-d
    //a-e
    //a-f
    //b-d
    //b-e
    //b-f
    //c-d
    //c-e
    //c-f
        }

    }
    
    vector<string> letterCombinations(string digits) {
       
    vector<string>res;
    if(digits.length()==0)return res;
    string s[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
   
    fun(0,digits,res,s,"");
    return res;
        
    }
        
};
