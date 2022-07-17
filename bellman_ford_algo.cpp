
class Solution{
	public:
	 /* 
    *   adj: vector of vectors which represents the graph
    *   S: source vertex to start traversing graph with
    *   V: number of vertices
    */
    vector <int> bellman_ford(int V, vector<vector<int>> adj, int S) {
        
        vector<int>dis(V,1e8);
        dis[S]=0;
        
        for(int i=0;i<V-1;i++)
        {
            for(auto k:adj)
            {
                int u=k[0];
                int v=k[1];
                int w=k[2];
                dis[v]=min(dis[v],dis[u]+w);
            }
            
        }
        
        return dis;
    }
};
