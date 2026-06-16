class Solution {
public:
    int hammingWeight(int n) {
        unsigned int a;
        int store;
        if(n==0){
            return 0;
        }
        for(int i=0;i<31;i++){
            a=pow(2,i);
            if(n/a==0){
              store=i;
              break;
            }
        }
        string r;
        a=pow(2,(store-1));
       while(n>0){
         if(n/a!=0){
            r+='1';
         }
         else{
            r+='0';
         }
         n=n%a;
         a=a/2;
       }
       // if n is a perfect power of 2
       while(r.length()!=store){
        r+='0';
       }
       int count=0;
       size_t found=r.find('1');
       while(found != string::npos){
        count++;
        found=r.find('1',found+1);
       }
  return count;  }
};