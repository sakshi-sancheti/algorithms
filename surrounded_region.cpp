class Solution {
public:
  
  void change(vector<vector<char>>& bd,int x,int y)
  { if(x<0 || y<0 || x>bd.size()-1 || y>bd[0].size()-1 || bd[x][y]!='O')
    return;
   
   bd[x][y]='*';
   change(bd,x+1,y);
   change(bd,x-1,y);
   change(bd,x,y+1);
   change(bd,x,y-1);
}
  

    void solve(vector<vector<char>>& bd) {
      
      int m=bd.size();
      int n=bd[0].size();
      
      for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
        {
          if(i==0 || j==0 || i==m-1 || j==n-1)
            change(bd,i,j);
        }
      
      for(int i=0;i<m;i++)
      { for(int j=0;j<n;j++)
        {
          if(bd[i][j]=='O') bd[i][j]='X';
          if(bd[i][j]=='*') bd[i][j]='O';
      }
      }
 }
};
