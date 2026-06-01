class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i=0,max=0,min=0,n=nums.size();
       sort(nums.begin(),nums.end());
    max=n*1;
    min=0;
    //binary search is (0)log(n);
    while(i<=n)
    {
       bool found = binary_search(nums.begin(), nums.end(),i);
       if(found==true)
       {
        i++;
        continue;
    }
       else{
        return i;
       }
        i++;
    }

  return i;  }
};