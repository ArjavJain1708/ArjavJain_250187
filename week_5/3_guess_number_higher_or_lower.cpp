class Solution {
public:
    int guessNumber(int n) {
     int low=1;
     int high=n;
     int mid=low+(high-low)/2;
     int ret=guess(mid);
     while(ret!=0){
          if(ret==-1){
            high=mid-1;
            mid=low+(high-low)/2;
          }
          else if(ret==1){
            low=mid+1;
            mid=low+(high-low)/2;
          }
          else{
            return mid;
          }
          ret=guess(mid);
     }
    return mid;}
};