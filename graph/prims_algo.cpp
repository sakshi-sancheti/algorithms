
//learnt: priority queue of pair with comparator


typedef pair<int,int> pd;
class Solution
{
	public:
	
	bool comp(pd const &p1,pd const&p2)
	{
	    return p1.second<p2.second;
	}
	
	struct myComp {
    constexpr bool operator()(
        pair<int, int> const& a,
        pair<int, int> const& b)
        const noexcept
    {
        return a.second > b.second;
    }
};
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
       
        vector<bool> vis(V,false);
         priority_queue<pd,vector<pd>, myComp>pq;
        int cost=0;
        pq.push(make_pair(0,0));
        while(pq.empty()==0)
        {
            
            pd t=pq.top();
            pq.pop();
            int u=t.first;
            if(vis[u]) continue;
            cost+=t.second;
            vis[u]=true;
            for(auto i:adj[u])
            {
                pq.push(make_pair(i[0],i[1]));
            }
        }
        
        
        return cost;
        
        
    }
};
