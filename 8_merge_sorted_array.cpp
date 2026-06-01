class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        nums1.resize(m+n);
       int j=0;
       if(nums2.empty()){
        return;
       }
     int i;
     for( i=0;i<m;i++){
        if(nums1[i]>=nums2[j]){
            int temp=nums1[i];
            nums1[i]=nums2[j];
            nums2[j]=temp;
            sort(nums2.begin(),nums2.end());
        }
     }
     
     while(j<n){
        nums1[i++]=nums2[j];
         j++;
     }


   return; }
};