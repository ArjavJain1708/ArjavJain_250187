class Solution {
public:
    int pivotIndex(vector<int>& nums) {
      int total=0,i;
      int leftsum=0;
      for(i=0;i<nums.size();i++)
      {
        total=total+nums[i];
      }
       for(i=0;i<nums.size();i++)
      {
        // leftsum=leftsum+nums[i]; isse answer galat aayega
     
        if(total-leftsum-nums[i]==leftsum)
        {
            return i;
        }   leftsum=leftsum+nums[i];
      }
     return -1;  }
};