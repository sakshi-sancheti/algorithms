const int n=1e5+6;
vector<int>parent(n);
vector<int> sz(n);
//initialising parent array
//size array not mandatory but used for optimization
void make_set(int v)
{

    parent[v]=v;
    sz[v]=1;
}

int find_set(int v)
{
    if(v==parent[v]) return v;

    return parent[v]=find_set(parent[v]);

}
// to create union
void uni(int a, int b)
{

    a=find_set(a);
    b=find_set(b);

    if(a!=b)
    {

        if(sz[a]<sz[b])
            swap(a,b);

        parent[b]=a;
        sz[a]+=sz[b];
    }
}
