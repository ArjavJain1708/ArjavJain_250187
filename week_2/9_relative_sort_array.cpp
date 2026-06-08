class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
       vector<int> ans;
           for(int i=0;i<arr2.size();i++){
            int count=0;
            for(int j=0;j<arr1.size();j++){
                if(arr1[j]==arr2[i]){
                    count++;
                    arr1.erase(arr1.begin()+j);
                    j--;
                }
            }
            int c=0;
            while(c<count){
                ans.push_back(arr2[i]);
                c++;
            }
           }
    sort(arr1.begin(),arr1.end());
    for(int i=0;i<arr1.size();i++){
        ans.push_back(arr1[i]);
    }
       return ans;  }
};