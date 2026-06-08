class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
         int i,j,l;
         l=nums.size();
         vector<pair<int, int>> vec;
 // similarly we can do it by struct 
for (int i = 0; i < nums.size(); ++i) {
    vec.push_back({nums[i], i});
}
sort(vec.begin(), vec.end());
  for(i=0;i<vec.size()-1;i++)
    {
         if (vec[i].first == vec[i+1].first)
        {  
            if(abs(vec[i].second-vec[i+1].second)<=k)
            {
                 return true;
            }
        }
    }
    return false;
    }
};