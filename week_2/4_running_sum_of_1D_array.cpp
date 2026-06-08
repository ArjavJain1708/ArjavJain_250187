class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> sum;
       int sums=0; 
        for(int i=0;i<nums.size();i++){
         
          sums=sums+nums[i];
          sum.push_back(sums);
        }
   return sum; }
};