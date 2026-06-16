class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=0,i,j,a;
        for(i=0;i<nums.size();i++)
        { n=0;
            for(j=0;j<nums.size();j++)
            {
                if(nums[j]==nums[i])
                {
                    n++;
                }
            }
            if(n==1){
                a=nums[i];
            }
        }
    return a;    
    }
};