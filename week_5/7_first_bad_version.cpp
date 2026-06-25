class Solution {
public:
    int firstBadVersion(int n) {
        unsigned int low=1;
        unsigned int high=n;
        unsigned int mid=low+(high-low)/2;
       
      while (low < high) {
            unsigned int mid = low + (high - low) / 2;
            
            if (isBadVersion(mid)) {
                high = mid;
            } else {
              low = mid + 1;
            }
        }
    return low;}
};