class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int i,b=0;
    
     
     for(i=0;i<letters.size();i++)
     {
        if(letters[i]>target)
        {    b=1;
            break;
        }
     }
     if(b==0){
        return letters[0];
     }
     return (letters[i]);
     
    }
};