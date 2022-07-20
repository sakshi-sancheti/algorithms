class Solution{
    public:
    //Function to arrange all letters of a string in lexicographical 
    //order using Counting Sort.
    string countSort(string s){
        
        int arr[26]={0};
        for(int i=0;i<s.length();i++)
        arr[s[i]-'a']++;
        
       
        for(int i=1;i<26;i++)
        arr[i]+=arr[i-1];
        
        
        string res=s;
        for(int i=0;i<s.length();i++)
        {
            arr[s[i]-'a']--;
            res[arr[s[i]-'a']]=s[i];
        }
        
        return res;
        
    }
};
