class Solution {
public:
void helper(vector<int>&nums,int idx,vector<vector<int>>&store,vector<int>&arr,int n,int k){
    if(idx>nums.size()){
        return;
    }
            if(arr.size()==k){
                if(accumulate(arr.begin(),arr.end(),0)==n){
                    store.push_back(arr);
                    return;
                }
                else{
                    return;
                }
            }
            arr.push_back(nums[idx]);
            helper(nums,idx+1,store,arr,n,k);
            arr.pop_back();
            helper(nums,idx+1,store,arr,n,k);
}
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>nums;
        for(int i=0;i<10;i++){
            nums.push_back(i);
            }
            vector<vector<int>> store;
            vector<int> arr;
            helper(nums,1,store,arr,n,k);
    return store;}
};