int Solution::solve(int A, vector<int> &B, vector<int> &C) {
    
    vector<int> g[A];
    vector<int> ind(A,0);
    for(int i=0;i<B.size();i++)
    {g[B[i]-1].push_back(C[i]-1);
    ind[C[i]-1]++;}
    
    vector<bool>vis(A,false);
    queue<int>q;
    
    for(int i=0;i<A;i++)
    if(ind[i]==0) {q.push(i);}
    
    while(!q.empty())
    {
        int t=q.front();
        q.pop();
        vis[t]=true;
        for(auto i:g[t])
        {
            ind[i]--;
            if(ind[i]==0) q.push(i);
        }
        
    }
    
    
    for(int i=0;i<A;i++)
    if(!vis[i]) return 0;
    
    
    return 1;
    
    
}
