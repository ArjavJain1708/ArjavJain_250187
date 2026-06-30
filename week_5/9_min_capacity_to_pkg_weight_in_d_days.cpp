class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
       
        int low= *max_element(weights.begin(), weights.end());
         int high=0;
        for(int i=0;i<weights.size();i++){
        high+=weights[i];
        }
        int mid;
        int ans=INT_MAX;
        while(low<=high){
           mid= low+(high-low)/2;
           int sum=0;
           int count=1;
           for(int i=0;i<weights.size();i++){
            if(sum+weights[i]<=mid){
                sum+=weights[i];
            }
            else if (sum+weights[i]>mid){
                sum=0;
               count++;
                sum=weights[i];
            }
           }
            if(count>days){
                low=mid+1;
            }
            else if(count<=days){
                ans=mid;
                high=mid-1;
            }
          
           }
        
   return ans; }
};