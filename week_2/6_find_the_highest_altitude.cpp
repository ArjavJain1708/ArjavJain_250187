class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum=0;
        int lastmax=0;
        int maxaltitude=0;
        for(int i=0;i<gain.size();i++){
            maxaltitude=max(maxaltitude,lastmax);
            lastmax=lastmax+gain[i];
            
        }
        maxaltitude=max(maxaltitude,lastmax);
    return maxaltitude;}
};