class Solution {
public:
    bool isPalindrome(int x) {
      long long  int num=0;
       int sign=1;
       if(x<0){
        sign=-1;
       }
      int temp = x;
       while(temp>0){
         int c=temp%10;
         num=num*10+c;
         temp=temp/10;
       } 
       num=num*sign;
   return num==x; }
};