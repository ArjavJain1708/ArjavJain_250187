class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int a=-2;
        int b=0;
        int mid,high=nums.size()-1,low=0;
        vector<int> ans;
        
        while(low<=high){
mid=low+((high-low)/2);
if(nums[mid]>target){
    high=mid-1;
}

else if(nums[mid]<target){
  low=mid+1;
}

else{
    a=mid;
    b=mid;
   while(a>=0&&b<nums.size()&&((nums[a]==target)&&(nums[b]==target)))
   {
    a--;
    b++;
   }
   break;
}
}


while (a >= 0 && nums[a] == target) {
    a--;
}


while (b < nums.size() && nums[b] == target) {
    b++;
}

ans.push_back(a+1);
ans.push_back(b-1);
 
  return ans;  }
};