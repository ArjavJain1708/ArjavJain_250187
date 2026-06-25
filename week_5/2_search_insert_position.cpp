class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0,found=0;
        int high = nums.size() - 1;

        while (low <= high) {
           
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                found=1;
                return mid; 
            } else if (nums[mid] < target) {
                low = mid + 1; 
            } else {
                high = mid - 1; 
            }
        }

        
        return low;
    }
};