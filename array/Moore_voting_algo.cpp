//algorithm to find the majority element i-e element which occurs more
//than n/2 times

class Solution {
public:
    int majorityElement(vector<int>& nums) {
      int cnt=1;
      int maj=nums[0];
      for(int i=1;i<nums.size();i++)
      {
        if(maj==nums[i]) cnt++;
        else
        {
          cnt--;
          if(cnt==0)
          {
            maj=nums[i];cnt=1;
          }
        }
      }
      //if it is mentioned -majority element always exists then return maj
      //else check count of maj by traversing again and return if it is >n/2
      return maj;
      
        
    }
};
