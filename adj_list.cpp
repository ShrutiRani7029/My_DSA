#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int>graph2[N];
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int v1,v2;
        cin>>v1>>v2;
        graph2[v1].push_back(v2);
        graph2[v2].push_back(v1);///if u comment this then u got ans for directed.
    }
    for(int i=1;i<=n;i++)
    {
       cout<<i<<"--->";
       for(int j=0;j<graph2[i].size();j++)
       {
           cout<<graph2[i][j]<<" ";
       }
       cout<<endl;
    }
}
