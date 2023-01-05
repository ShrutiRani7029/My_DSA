///COMES UNDER MULTIPLE FUNCTION CALLS ---------------------
#include<bits/stdc++.h>
using namespace std;
///fibonacci series : 0,1,1,2,3,5,8,13,21,34....
int fibo(int n)
{
    if(n<=1)return n;
    return fibo(n-1) +fibo(n-2);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    cout<<fibo(n)<<endl;
    }
}
