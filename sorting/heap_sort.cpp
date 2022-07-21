class Solution
{
    public:
    void swap(int arr[],int i,int j)
    {
        int t=arr[i];
        arr[i]=arr[j];
        arr[j]=t;
    }
    void heapify(int arr[], int n, int i)  
    {
      int ind=i;
      int l=2*i+1;
      int r=2*i+2;
      
      if(l<n && arr[l]>arr[ind])
      ind=l;
      
      if(r<n && arr[r]>arr[ind])
      ind=r;
      
      if(ind!=i)
      {
          swap(arr,i,ind);
          heapify(arr,n,ind);
      }
    }

    public:
    //Function to sort an array using Heap Sort.
    void heapSort(int arr[], int n)
    {
       for(int i=n/2-1;i>=0;i--)
       {
           heapify(arr,n,i);
       }
       for(int i=n-1;i>0;i--)
       {
           swap(arr,0,i);
           heapify(arr,i,0);
       }
    }
};
