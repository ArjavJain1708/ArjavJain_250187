class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> store;
        long long int k;
        for(int i=0;i<nums.size();i++){
            k=nums[i]*nums[i];
            store.push_back(k);
        }
        sort(store.begin(),store.end());
    return store;}
};