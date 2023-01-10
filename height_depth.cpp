#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int>graph[N];///N vectors of 0 size
int depth[N],height[N];
void dfs(int vertex,int parent)
{
  for(int child:graph[vertex])
  {
    if(child==parent)continue;
    //before
    depth[child]=depth[vertex]+1;
    //after
    height[vertex]=max(height[vertex],height[child]);
  }
}
int main()
{
  int n;
  cin>>n;
  for(int i=0;i<n-1;i++)
  {
    int x,y;
    cin>>x>>y;
    graph[x].push_back(y);
    graph[y].push_back(x);
  }
  dfs(1,0);
  for(int i=0;i<=n;i++)
    cout<<depth[i]<<" "<<height[i]<<endl;
}
