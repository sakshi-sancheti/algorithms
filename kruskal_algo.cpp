class Solution
{
	public:
	
	
	int findset(int u,vector<int>&parent)
	{
	    if(parent[u]==u) return u;
	    
	    return parent[u]=findset(parent[u],parent);
	}
	
	
	void makeuni(int a,int b,vector<int>&parent)
	{
	    a=findset(a,parent);
	    b=findset(b,parent);
	    
	    if(a!=b)
	    parent[b]=a;
	}
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
  
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        
        
        vector<int> parent(V);
        for(int i=0;i<V;i++)
        parent[i]=i;
        
        
        vector<vector<int>>edges;
        
        for(int i=0;i<V;i++)
        for(int j=0;j<adj[i].size();j++)
        {
            edges.push_back({adj[i][j][1],i,adj[i][j][0]});
        }
        
        sort(edges.begin(),edges.end());
        
        int cost=0;
        
        for(auto i:edges)
        {
            int x=findset(i[1],parent);
            int y=findset(i[2],parent);
            if(x==y) continue;
            
            cost+=i[0];
            makeuni(x,y,parent);
        }
        
       return cost; 
    }
    };
