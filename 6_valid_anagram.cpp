class Solution {
public:
    bool isAnagram(string s, string t) {
        int i,l,m,b;
        char p;
        l=s.length();
        m=t.length();
        if(l!=m)
        {
            return false;
        }
        else{
            for(i=0;i<l;i++)
            {
            //    erase(t,s[i]);
            size_t pos = t.find(s[i]);
             if (pos != std::string::npos) {
                  t.erase(pos, 1);
       
    } else {
       
        return false;
           }
            }
            if(t=="")
            {
                return true;
            }
            else{
                return false;
            }

        }
    }
};