class Solution {
public:
void helper(vector<int>& candidates, int target,vector<int>&nums,int i,vector<vector<int>>&store){
     if(accumulate(nums.begin(), nums.end(), 0)==target){
       store.push_back(nums);
       return;
     }
     else if(accumulate(nums.begin(), nums.end(), 0)>target||i>=candidates.size()){
        return ;
     }
   
    nums.push_back(candidates[i]);
    helper(candidates,target,nums,i,store);
    nums.pop_back();
    helper(candidates,target,nums,i+1,store);
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
       vector<int> nums;
       vector<vector<int>> store;
       helper(candidates,target,nums,0,store);
       return store; }
};