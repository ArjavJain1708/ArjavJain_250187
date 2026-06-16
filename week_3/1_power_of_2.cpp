class Solution {
public:
    bool isPowerOfTwo(int n) {
     double temp=n;
       while(temp>0){
       
        if(temp==1){
            return true;
        }
        
        temp/=2;
       } 
   return false; }
};