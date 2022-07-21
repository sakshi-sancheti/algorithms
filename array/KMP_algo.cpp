
// Knuth Morris Pratt (KMP) is an algorithm, which checks the characters from left to right. When a pattern 
// has a sub-pattern appears more than one in the sub-pattern,
// it uses that property to improve the time complexity, also for in the worst case. 
// The time complexity of KMP is O(n)


// Input:
// txt = "batmanandrobinarebat", pat = "bat"
// Output: 1 18
// Explanation: The string "bat" occurs twice
// in txt, one starts are index 1 and the other
// at index 18.

class Solution
{
    int prefix(string &txt,int s,int e)
    {
        int cnt=0;
        while(s<e && txt[s]==txt[e])
        {
            s++;e--; cnt++;
        }
        
        return cnt;
        
    }
    public:
        vector <int> search(string pat, string txt)
        {   vector<int>ans;
            int n=pat.length();
            int m=txt.length();
            int pre[n];
            for(int i=0;i<n;i++)
            pre[i]=prefix(pat,0,i);
            
            int i=0,j=0;
            while(i<m)
            {
                if(pat[j]==txt[i]) {i++;j++;}
                else 
                {if(j>0) j=pre[j-1];
                else i++;
                }
                
                if(j==n) {ans.push_back(i-n+1);j=0;}
            }
            
            return ans;
  }};




//prefix array can also be computed as

int pre[n];
int i=1,len=0;
pre[0]=0;
while(i<n)
{
if(pat[i]==pat[len]
   {
       pre[i]=len+1;
       len++;
       i++;
   }
   else
   {
       pre[i]=0;i++;
   }
}
