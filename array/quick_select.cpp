//partition algorithm same as quick sort 
//rest code is slighty different


class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int swap(int arr[],int i,int j)
    {
        int t=arr[i];
        arr[i]=arr[j];
        arr[j]=t;
    }
    int partition(int arr[],int l,int r)
    {
       int pivot=arr[r];
       int i=l;
       for(int j=l;j<r;j++)
       {
           if(arr[j]<=pivot)
           {
              swap(arr,i,j);
              i++;
           }
       }
       
       swap(arr,i,r);
       
       return i;
       
    }
    int kthSmallest(int arr[], int l, int r, int k) {
            
            
            if(k>0 && k<=(r-l+1))
            {int p=partition(arr,l,r);
            if(p-l==k-1) return arr[p];
            
            if(p-l>k-1) return kthSmallest(arr,l,p-1,k);
            
           return  kthSmallest(arr,p+1,r,k-p+l-1);
            }
            
        
    }
};
