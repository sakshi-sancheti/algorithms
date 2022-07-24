 typedef pair<int,int> pd;
class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int s)
    {
      set <pd>edge;
      vector<int> dis(V,INT_MAX);
      edge.insert({s,0});
      dis[s]=0;
      
      while(!edge.empty())
      {
          auto x=*edge.begin();
          edge.erase(x);
          for(auto i:adj[x.first])
          {    int u=x.first;
              int v=i[0];
              int w=i[1];
              if(dis[u]+w <dis[v]) {edge.erase({v,dis[v]});dis[v]=dis[u]+w; 
              edge.insert({v,dis[v]});}
          }
      }
       
    
    for(int i=0;i<V;i++)
    if(dis[i]==INT_MAX) dis[i]=-1;
    
    
    return dis;
    };
    
