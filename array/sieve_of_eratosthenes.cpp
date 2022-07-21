//optimized approach to genrate all prime numbers between M and N

//M=1,N=10  ans-2 3 5 7

class Solution {
  public:
    vector<int> primeRange(int M, int N) {
        bool pr[N+1];
        memset(pr,true,sizeof(pr));
        pr[0]=pr[1]=false;
        for(int i=2;i<=sqrt(N);i++)
        {
            if(pr[i])
            {
                for(int j=i*i;j<=N;j++)
                if(j%i==0) pr[j]=false;
            }
        }
        
        vector<int>ans;
        for(int i=M;i<=N;i++)
        if(pr[i]) ans.push_back(i);
        
        return ans;
    }
};
