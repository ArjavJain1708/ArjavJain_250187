class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    int i,j,b=1;
    sort(nums.begin(), nums.end());
    for(i=0;i<nums.size()-1;i++)
    {
        if(nums[i]==nums[i+1])
        {
            return true;
        }
    }
    return false;}
};