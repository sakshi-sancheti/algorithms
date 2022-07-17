
class Solution {
  public:
	void shortest_distance(vector<vector<int>>&m){
	    int n=m.size();
	     for(int k=0;k<n;k++)
	    {for(int j=0;j<n;j++)
	     for(int i=0;i<n;i++)
	    {   if(m[i][k]==-1 || m[k][j]==-1) continue;
	        if(m[i][j]==-1) m[i][j]=m[i][k]+m[k][j];
	        else
	        m[i][j]=min(m[i][j],m[i][k]+m[k][j]);
	    }
	    }
	}
};
//better to change -1  in graph matrix to INT_MAX. so, no need to handle dis=-1 case.
