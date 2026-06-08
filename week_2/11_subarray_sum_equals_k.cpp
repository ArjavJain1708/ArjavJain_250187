class Solution {
public:

int subarraySum(vector<int>& nums, int k) {
int j=0;
int b=0;
int count=0;
int sum=0;

    for(int i=0;i<nums.size();i++){
        b=0;
    sum=nums[i];
    
    if(sum==k){
        count++;
        b=1;
    }
    j=i+1;
    while(j<nums.size()){
     if(sum==k&&b==0){
        count++;
        b=1;
   }

    else{
        b=0;
        sum=nums[j]+sum;
        j++;
    }

    
 }
    if(sum==k&&b==0){
     count++;
              }

    if(b==1){
     if(j+1<nums.size()){
        while(sum+nums[j+1]==k){
        count++;
        j++;
    }
          }
}
    }
 return count;}
};