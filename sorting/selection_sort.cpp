class Solution
{
    public:
    int select(int arr[], int i,int n)
    {
       
        int min=INT_MAX;
        int ind=i;
        for(int j=i;j<n;j++)
        if(arr[j]<min) {min=arr[j];ind=j;}
        
        return ind;
    }
     
    void selectionSort(int arr[], int n)
    {
       for(int i=0;i<n;i++)
       {
           int j=select(arr,i,n);
           int temp=arr[i];
           arr[i]=arr[j];
           arr[j]=temp;
       }
       
    }
};
