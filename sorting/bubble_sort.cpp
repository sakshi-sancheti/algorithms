//array gets sorted from behind

class Solution
{
    public:
    //Function to sort the array using bubble sort algorithm.
    void bubbleSort(int arr[], int n)
    {
        int  cnt=1;
        while(cnt<n)
        {
            for(int i=0;i<n-cnt;i++)
            {
                if(arr[i]>arr[i+1])
                {
                    int t=arr[i];
                    arr[i]=arr[i+1];
                    arr[i+1]=t;
                    
                }
            }
            cnt++;
        }
        
    }
};
