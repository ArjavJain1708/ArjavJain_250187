class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int result1=0;
        for(int i=0;i<nums1.size();i++){
          result1=result1 xor nums1[i];
        }

        int result2=0;
        for(int i=0;i<nums2.size();i++){
          result2=result2 xor nums2[i];
        }
       int finalAns = 0;
        
       
        if (nums2.size() % 2 != 0) {
            finalAns = finalAns ^ result1;
        }
        
      
        if (nums1.size() % 2 != 0) {
            finalAns = finalAns ^ result2;
        }
        
        return finalAns;
        
  
    }
};