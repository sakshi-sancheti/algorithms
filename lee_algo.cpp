//based on Breadth first search
//The Lee algorithm is one possible solution for maze routing problems. 
//It always gives an optimal solution, if one exists, but is slow and requires large memory for dense layout.
//imp ques- snake and ladder

class Solution {
  public:
    int shortestPath(vector<vector<int>> &grid, pair<int, int> source,
                     pair<int, int> des) {
     
        int x1=source.first;
        int y1=source.second;
        int x2=des.first;
        int y2=des.second;
        if(grid[x1][y1]==0 || grid[x2][y2]==0) return -1;
        
        int n=grid.size();
        int m=grid[0].size();
       vector<vector<bool>>vis(n,vector<bool>(m,false));
       int dx[]={0,1,0,-1};
       int dy[]={1,0,-1,0};
        queue<int>x,y,dis;
        x.push(x1); y.push(y1);
        dis.push(0);
        int cnt=0;
        vis[x1][y1]=true;
        while(!x.empty())
        {
            x1=x.front();x.pop();
            y1=y.front();y.pop();
            int d=dis.front();dis.pop();
            vis[x1][y1]=true;
            if(x1==x2 && y1==y2) return d;
            
          for(int i=0;i<4;i++ )
          {
              int cx=x1+dx[i];
              int cy=y1+dy[i];
              
              if(cx>=0 && cy>=0 && cx<n && cy<m && vis[cx][cy]==false && grid[cx][cy]==1)
              { vis[cx][cy]=1;
                  x.push(cx);
              y.push(cy);
              dis.push(d+1);
              }
          }
        }
        
      return -1;
        
    }
};
