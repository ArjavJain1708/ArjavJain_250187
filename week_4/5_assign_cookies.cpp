class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
int count = 0;
        priority_queue<int> greed(g.begin(), g.end());
        priority_queue<int> cookie(s.begin(), s.end());
        
 while (!greed.empty() && !cookie.empty()) {
            
     if (greed.top() > cookie.top()) {
        greed.pop();
 } 
    else {
       count++;
     greed.pop();
          cookie.pop();
            }
        }
        
        return count;
    }
};