class Solution {
public:

    char findTheDifference(string s, string t) {
      if(s.empty()){
        return t[0];
      }
      int b=0;
      for(int i=0;i<s.length();i++){
        for(int j=0;j<t.length()&&b==0;j++){
            if(t[j]==s[i]){
                t[j]='0';
                b=1;
            }
        }
        b=0;
      }
      for(int i=0;i<t.length();i++){
        if(t[i]!='0'){
            return t[i];
           
        }
      }  
   return 'k'; }
};