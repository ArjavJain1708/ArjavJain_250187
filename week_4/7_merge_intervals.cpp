class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<int> nums;
        vector<vector<int>>ans;
        vector<int>store;
        sort(intervals.begin(),intervals.end());
        nums=intervals[0];
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0] > nums[1]){
             ans.push_back(nums);
                nums = intervals[i];
            }
            else{
                nums[1] = max(nums[1], intervals[i][1]);
            }
        }
        ans.push_back(nums);
   return ans; }
};