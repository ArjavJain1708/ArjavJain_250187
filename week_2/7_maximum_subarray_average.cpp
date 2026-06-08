class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
     double currentsum = 0;
        
        
        for (int i = 0; i < k; i++) {
            currentsum += nums[i];
        }
        
        double max_average = currentsum / k;
        
       
        for (int i = k; i < nums.size(); i++) {
            
            currentsum += nums[i] - nums[i - k];
            
            
            max_average = max(max_average, currentsum / k);
        }
        
        return max_average;
    }
};