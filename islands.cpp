class Solution {
public:
void dfs(int i,int j,vector<vector<char>>&g ,int vis[][600],int n,int m)
  {
     /*int n=g.size();
     int m=g[0].size();*/
     if(i<0 || j<0)return;
     if(i>=n || j>=m)return;
     if(g[i][j]=='0')return;
     if(!vis[i][j])
     {
     vis[i][j]=1;
     dfs(i+1,j,g,vis,n,m);
     dfs(i-1,j,g,vis,n,m);
     dfs(i,j-1,g,vis,n,m);
     dfs(i,j+1,g,vis,n,m);
    
     }
     
  }
    // Function to find the number of islands.
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        //int count=0;
        int vis[600][600];
        int n=grid.size();
        int m=grid[0].size();
        
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                vis[i][j]=0;
            }
        }
        for(int i=0;i<n;i++)
        {
           for(int j=0;j<m;j++)
           {
               
         if(grid[i][j]!='0' && !vis[i][j] )
        {
            dfs(i,j,grid,vis,n,m);
            count++;
        }
           }
           
        }
        return count;
    }
};
