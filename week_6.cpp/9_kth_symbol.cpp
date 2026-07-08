
class Solution {
public:
    int kthGrammar(int n, int k) {
       
        if (n == 1) return 0;
        
       
        int prev_len = 1 << (n - 2); 
        
        
        if (k <= prev_len) {
            return kthGrammar(n - 1, k);
        } 
        
        else {
            return !kthGrammar(n - 1, k - prev_len);
        }
    }
};
